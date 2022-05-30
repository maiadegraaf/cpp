#ifndef CURE_H
#define CURE_H
#include <iostream>
#include <string>
#include "aMateria.hpp"
 
// Class definition 
class Cure : public aMateria
{
public: 
// Constructor 
	Cure(void); 
	Cure( const Cure &rhs); 
	~Cure(void); 
	Cure& operator=( const Cure &rhs); 
	aMateria* clone() const;
	void use(ICharacter& target);
}; 
 
#endif
