#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
 
// Class definition 
class Character : public ICharacter
{
private: 
	std::string name;
	AMateria *inventory[4];
	AMateria **trash;
	int sizeTrash;
 
public: 
// Constructor 
	Character(); 
	Character( const Character &rhs); 
	Character(std::string newName);
	~Character(); 
	Character& operator=( const Character &rhs); 
//Getters 
	std::string const & getName() const; 
//Setters 
	void setName(std::string const & name); 
// ToString Method 
	void toString();

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
}; 
 
#endif
