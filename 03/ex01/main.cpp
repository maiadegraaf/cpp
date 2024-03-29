#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Bob("Bob"), Henry("Henry"), Theodore("Theodore");
	ScavTrap George("George"), John("John");

	Bob.attack("Henry");
	Bob.attack("Henry");
	Henry.takeDamage(Bob.getAttackDamage());
	Bob.takeDamage(10);
	Bob.attack("Henry");
	Theodore.beRepaired(2);
	George.attack("Bob");
	John.guardGate();
	George.takeDamage(3);
	John.beRepaired(4);
}