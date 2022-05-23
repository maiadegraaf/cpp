#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>
# include <iostream>
# include <iomanip>
# include <limits>
# include <stdlib.h>

# define GREEN "\033[1;92m"
# define RED  "\033[0;31m"
# define PLAIN "\033[0m"

class Zombie
{
private:
	std::string	name;
public:
	void	announce(void);
	void	setName(std::string name);
	void	destruct(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif // __ZOMBIE_H__