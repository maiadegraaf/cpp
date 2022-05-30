#include "Character.hpp"
// Constructor initializes attributes to 0 by default 
Character::Character()
	: name(0), trash(nullptr), sizeTrash(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}
 
Character::Character( const Character& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = rhs.inventory[i];
	}
	name = rhs.name;
}
 
Character::Character(std::string newName) 
	: name(newName), trash(nullptr), sizeTrash(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	for (int i = 0; i < sizeTrash; i++)
		delete trash[i];
	delete[] trash;
}

Character&	Character::operator=( const Character& rhs )
{
	name = rhs.name;
	return *this;
}

//Getters 
std::string  const & Character::getName() const
	{ return name; }
 
//Setters 
void Character::setName(std::string const & newName)
	{ name = newName; }
 
// toString 
void Character::toString()
{
	std::cout << "name: " << name << std::endl; 
	for (int i = 0; i < 4; i++)
		std::cout << "inventory[" << i << "]: " << inventory[i]->getType() << std::endl; 
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || inventory[idx] == nullptr)
		return ;
	if (sizeTrash == 0)
	{
		sizeTrash = 1;
		trash = new AMateria*[sizeTrash];
		trash[0] = inventory[idx];
	}
	else
	{
		++sizeTrash;
		AMateria **tmpTrash = new AMateria*[sizeTrash];
		for (int i = 0; i < sizeTrash - 1; i++)
			tmpTrash[i] = trash[i];
		delete[] trash;
		trash = tmpTrash;
		trash[sizeTrash - 1] = inventory[idx];
	}
	inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}
