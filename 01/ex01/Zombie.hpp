#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>
using namespace std;

class Zombie
{
private:
	string	name;
public:
	void	announce(void);
	void	setName(string name);
	void	destruct(void);
};

Zombie *zombieHorde(int N, string name);

#endif // __ZOMBIE_H__