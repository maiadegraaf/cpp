#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string nName);
		FragTrap( const FragTrap& rhs );
		~FragTrap();
		FragTrap&	operator=( const FragTrap& rhs );
		void	highFivesGuys(void);
};

#endif // __FRAGTRAP_H__