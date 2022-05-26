#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A wild Cat apears" << std::endl;
}

Cat::Cat(const Cat& rhs)
{
	
}

Cat::~Cat()
{
	
}

Cat& Cat::operator=(const Cat& rhs)
{
	
}

void Cat::makeSound(void)
{
	std::cout << "Meooow" << std::endl;
}
