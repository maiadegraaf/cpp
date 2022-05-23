#include "HumanA.hpp"

void HumanA::attack()
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}

void HumanA::setWeapon(Weapon newWeapon)
{
	weapon = newWeapon;
}

HumanA::HumanA(string newName, Weapon newWeapon)
{
	name = newName;
	weapon.setType(newWeapon.getType());
}
