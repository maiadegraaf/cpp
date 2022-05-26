#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_trap"), Name("default")
{
	std::cout << "Default DiamondTrap has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(std::string nName) : ClapTrap(nName + "_clap_trap"), FragTrap(), ScavTrap(), Name(nName)
{
	ClapTrap::HitPoints = FragTrap::HitPoints;
	ClapTrap::EnergyPoints = ScavTrap::EnergyPoints;
	ClapTrap::AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap " << nName << " has been constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap copy constructed called on " << rhs.Name << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " has been destructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	Name = rhs.Name;
	this->ClapTrap::Name = rhs.ClapTrap::Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is  " << Name << ", I am a DiamondTrap and my ClapTrap name is " << ClapTrap::Name << std::endl;
}
