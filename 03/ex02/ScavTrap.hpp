#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
					ScavTrap();
					ScavTrap(std::string nName);
					ScavTrap( const ScavTrap& rhs );
					~ScavTrap();
		ScavTrap&	operator=( const ScavTrap& rhs );
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif // SCAVTRAP_HPP
