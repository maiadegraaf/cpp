#ifndef CURE_H
#define CURE_H
#include <iostream>
#include <string>
#include "AMateria.hpp"
 
// Class definition 
class Cure : public AMateria
{
public: 
// Constructor 
	Cure(void); 
	Cure( const Cure &rhs); 
	~Cure(void); 
	Cure& operator=( const Cure &rhs); 
	Cure* clone() const;
	void use(ICharacter& target);
}; 
 
#endif
