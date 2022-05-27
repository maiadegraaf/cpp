#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A wild dog apears" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs.getType())
{
	std::cout << "A dog has been copied" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog has been destructed" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	Animal(rhs.getType());
	std::cout << "A dog has been coppied through assignment" << std::endl;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooooof" << std::endl;
}
