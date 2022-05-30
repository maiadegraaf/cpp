#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "A wild dog apears" << std::endl;
}

Dog::Dog(const Dog& rhs)
{
	type = rhs.type;
	brain = new Brain();
	brain = rhs.brain;
	std::cout << "A dog has been copied" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "A dog has been destructed" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	brain = new Brain();
	brain = rhs.brain;
	std::cout << "A dog has been coppied through assignment" << std::endl;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woooooof" << std::endl;
}
