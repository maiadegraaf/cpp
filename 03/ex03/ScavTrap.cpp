#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap has been constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap copy constructed called on " << rhs.Name << std::endl;
}

ScavTrap::ScavTrap(std::string nName)
	: ClapTrap(nName)
{
	std::cout << "ScavTrap " << nName << " has been constructed." << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " has been destructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << BLUE << "[ATTACK] " << RESET_COLOR << "ScavTrap " << Name;
	if (HitPoints <= 0)
	{
		std::cout << " can't attack because it is already dead!" << std::endl;
		return ;
	}
	if (EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << " can't attack as it doesn't have any energy points left." << std::endl;

}

void ScavTrap::guardGate(void)
{
	std::cout << MAGENTA << "[GATE KEEPING MODE ACTIVATED] " << RESET_COLOR << "ScavTrap " << Name << " is now in Gate Keeper mode." << std::endl;
}
