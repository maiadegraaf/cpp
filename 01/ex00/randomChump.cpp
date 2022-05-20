#include "Zombie.hpp"

void	randomChump(string name)
{
	Zombie ret;

	ret.setName(name);
	ret.announce();
	ret.destruct();
}