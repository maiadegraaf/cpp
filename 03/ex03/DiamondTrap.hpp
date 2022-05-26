#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	Name;
		using FragTrap::HitPoints;
		using ScavTrap::EnergyPoints;
		using FragTrap::AttackDamage;
	public:
		DiamondTrap();
		DiamondTrap(std::string nName);
		DiamondTrap( const DiamondTrap& rhs );
		~DiamondTrap();
		DiamondTrap&	operator=( const DiamondTrap& rhs );
		using ScavTrap::attack;
		void whoAmI();
};

#endif // __DIAMONDTRAP_H__