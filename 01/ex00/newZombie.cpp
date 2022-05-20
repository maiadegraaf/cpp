#include "Zombie.hpp"

Zombie* newZombie(string name)
{
	Zombie *ret = new Zombie;
	ret->setName(name);
	return (ret);
}
