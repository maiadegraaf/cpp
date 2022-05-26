#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__
#include <string>
#include <iostream>
#include "color.hpp"

class ClapTrap
{
public:
				ClapTrap(std::string nName);
				ClapTrap(void);
				ClapTrap(const ClapTrap& other);
				~ClapTrap();
	ClapTrap	operator=(const ClapTrap& other);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int			getAttackDamage(void) {return (AttackDamage);};
	
protected:
	std::string	Name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
};

#endif // __CLAPTRAP_H__