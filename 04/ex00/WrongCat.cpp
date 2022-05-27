#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A wild WrongCat apears" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs.getType())
{
	std::cout << "A WrongCat has been copied" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat has been destructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	WrongAnimal(rhs.getType());
	std::cout << "A WrongCat has been coppied through assignment" << std::endl;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meooow" << std::endl;
}
