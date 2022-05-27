#include "Animal.hpp"

Animal::Animal() : type("undiscovered")
{
	std::cout << "An undicovered animal type has been constructed" << std::endl;
}

Animal::Animal(std::string nType) : type(nType) 
{
	std::cout << "A " << type << " has been constructed" << std::endl;
}

Animal::Animal(const Animal& rhs) : type(rhs.type)
{
	std::cout << "A " << type << " has been copied" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " has been destructed" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	type = rhs.type;
	std::cout << "A " << type << " has been copied through assignment" << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
