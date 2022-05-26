#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap has been constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "FlagTrap copy constructed called on " << rhs.Name << std::endl;
}

FragTrap::FragTrap(std::string nName) : ClapTrap(nName)
{
	std::cout << "FragTrap " << nName << " has been constructed." << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " has been destructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << CYAN << "[HIGH FIVE]" << RESET_COLOR << "FragTrap " << Name << " gives all the guys high fives!!" << std::endl;
}

