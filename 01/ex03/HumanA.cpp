#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& newWeapon)
{
	weapon = newWeapon;
}

HumanA::HumanA(std::string newName, Weapon& newWeapon) :
	name(newName), weapon(newWeapon)
{
}
