#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>


class Zombie
{
private:
	std::string name;
public:
	void	announce(void);
	void	setName(std::string name);
	void	destruct(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif // __ZOMBIE_H__