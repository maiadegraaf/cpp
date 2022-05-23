#include "HumanB.hpp"

void HumanB::attack()
{
		cout << name << " attacks with their " << weapon.getType() << endl;
}

void HumanB::setWeapon(Weapon newWeapon)
{
	weapon.setType(newWeapon.getType());
}

HumanB::HumanB(string newName)
{
	name = newName;
}
