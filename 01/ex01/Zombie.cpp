#include "Zombie.hpp"

void	Zombie::announce(void)
{
	cout << "\033[1;92m" << name << ":\033[0m BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::setName(string newName)
{
	name = newName;
}

void	Zombie::destruct(void)
{
	cout << "\033[0;31mZombie " << name << " has been destroyed\033[0m\n" << endl;
}