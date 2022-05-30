#ifndef ICE_H
#define ICE_H
#include <iostream>
#include <string>
#include "AMateria.hpp"
 
// Class definition 
class Ice : public AMateria
{
public: 
// Constructor 
	Ice(void); 
	Ice( const Ice &rhs); 
	~Ice(void); 
	Ice& operator=( const Ice &rhs); 
	Ice* clone() const;
	void use(ICharacter& target);
}; 
 
#endif
