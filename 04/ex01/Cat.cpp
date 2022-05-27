#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A wild Cat apears" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs.getType())
{
	std::cout << "A cat has been copied" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat has been destructed" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	Animal(rhs.getType());
	std::cout << "A cat has been coppied through assignment" << std::endl;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
}
