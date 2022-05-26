#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nName)
	: Name(nName), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << " has been constructed." << std::endl;
}

ClapTrap::ClapTrap(void)
	: Name("default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default ClapTrap has been constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	: Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage)
{
	std::cout << "ClapTrap copy constructed called on " << other.Name << std::endl;
}

ClapTrap	ClapTrap::operator=(const ClapTrap& other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " has been destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << BLUE << "[ATTACK] " << RESET_COLOR << "ClapTrap " << Name;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "[TAKE DAMAGE]" << RESET_COLOR << " ClapTrap " << Name;
	if (HitPoints <= 0)
	{
		std::cout << " is already dead!" << std::endl;
		return ;
	}
	if (HitPoints - amount <= 0)
	{
		std::cout << " has taken " << amount << " damage and is now dead 💀" << std::endl;
		HitPoints = 0;
	}
	else
	{
		HitPoints -= amount;
		std::cout << " has taken " << amount << " damage and has " << HitPoints << " Hit Points left." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << "[REPAIR]" << RESET_COLOR << " ClapTrap " << Name;
	if (HitPoints <= 0)
	{
		std::cout << " can't repair because it is already dead!" << std::endl;
		return ;
	}
	if (EnergyPoints > 0)
	{
		EnergyPoints--;
		HitPoints += amount;
		std::cout << " repairs itself by " << amount << " Hit Points and now has " << HitPoints << " Hit Points." << std::endl;
	}
	else
		std::cout << " can't repair itself as it doesn't have any energy points left." << std::endl;
}
