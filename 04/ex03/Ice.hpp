#ifndef ICE_H
#define ICE_H
#include <iostream>
#include <string>
#include "aMateria.hpp"
 
// Class definition 
class Ice : public aMateria
{
public: 
// Constructor 
	Ice(void); 
	Ice( const Ice &rhs); 
	~Ice(void); 
	Ice& operator=( const Ice &rhs); 
	aMateria* clone() const;
	void use(ICharacter& target);
}; 
 
#endif
