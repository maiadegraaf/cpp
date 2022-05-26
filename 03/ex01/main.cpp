#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Bob("Bob"), Henry("Henry"), Theodore("Theodore");

	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Bob.attack("Henry");
	Henry.takeDamage(Bob.getAttackDamage());
	Bob.takeDamage(10);
	Bob.attack("Henry");
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
	Theodore.beRepaired(2);
}