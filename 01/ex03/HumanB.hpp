#ifndef __HUMANB_H__
#define __HUMANB_H__
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* weapon;
	std::string name;
public:
	HumanB(std::string newName);
	void setWeapon(Weapon& newWeapon);
	void attack(void);
};

#endif // __HUMANB_H__