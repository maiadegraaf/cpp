#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undiscovered")
{
	std::cout << "An undicovered WrongAnimal type has been constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string nType) : type(nType) 
{
	std::cout << "A " << type << " has been constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) : type(rhs.type)
{
	std::cout << "A " << type << " has been copied" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " has been destructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	type = rhs.type;
	std::cout << "A " << type << " has been copied through assignment" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
