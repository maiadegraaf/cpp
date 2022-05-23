#ifndef __HUMANA_H__
#define __HUMANA_H__
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon& weapon;
	std::string name;
public:
	HumanA(std::string newName, Weapon& newWeapon);
	void	attack(void);
	void setWeapon(Weapon& newWeapon);
};

#endif // __HUMANA_H__