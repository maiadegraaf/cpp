#ifndef __HUMANB_H__
#define __HUMANB_H__
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon weaponType;
	string name;
public:
	HumanB(string newName);
	void attack(void);
};

HumanB::HumanB(string newName)
{
	name = newName;
}

#endif // __HUMANB_H__