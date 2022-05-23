#ifndef __HUMANA_H__
#define __HUMANA_H__
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	string name;
public:
	HumanA(string newName, Weapon newWeapon);
	void	attack(void);
	void setWeapon(Weapon newWeapon);
};

#endif // __HUMANA_H__