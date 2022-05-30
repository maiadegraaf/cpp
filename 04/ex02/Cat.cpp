#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "A wild Cat apears" << std::endl;
}

Cat::Cat(const Cat& rhs)
{
	type = rhs.type;
	brain = new Brain();
	brain = rhs.brain;
	std::cout << "A cat has been copied" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A cat has been destructed" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	type = rhs.type;
	brain = new Brain();
	brain = rhs.brain;
	std::cout << "A cat has been coppied through assignment" << std::endl;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
}
