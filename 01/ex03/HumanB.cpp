#include "HumanB.hpp"

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their imagination" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

HumanB::HumanB(std::string newName)
{
	name = newName;
}
