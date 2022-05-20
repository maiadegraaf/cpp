#ifndef __HUMANA_H__
#define __HUMANA_H__
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weaponType;
	string name;
public:
	HumanA(string newName, Weapon newWeapon);
	void	attack(void);
};

HumanA::HumanA(string newName, Weapon newWeapon)
{
	name = newName;
	weaponType = newWeapon;
}

#endif // __HUMANA_H__