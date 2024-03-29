#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "\033[1;92m" << name << ":\033[0m BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

Zombie::~Zombie()
{
	std::cout << "\033[0;31mZombie " << name << " has been destroyed\033[0m" << std::endl;
}