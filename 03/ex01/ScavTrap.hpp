#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"

class ScavTrap: private ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string nName) : public ClapTrap() {};
	~ScavTrap();
};

ScavTrap::ScavTrap(/* args */)
{
}

ScavTrap::~ScavTrap()
{
}


#endif // __SCAVTRAP_H__