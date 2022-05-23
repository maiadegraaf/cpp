#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << GREEN << name << PLAIN << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

void	Zombie::destruct(void)
{
	std::cout << RED << "Zombie " << name << " has been destroyed" << PLAIN << "\n" << std::endl;
}