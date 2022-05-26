#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Bob("Bob"), Henry("Henry"), Theodore("Theodore");
	ScavTrap George("George"), John("John");
	FragTrap Holice("Holice"), Maurice("Maurice");
	FragTrap Thomas = Holice;
	FragTrap Peter(Maurice);

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
	Peter.highFivesGuys();
	Thomas.attack("John");
	Holice.beRepaired(3);
	Maurice.takeDamage(20);
}