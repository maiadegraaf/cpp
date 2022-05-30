#ifndef AMATERIA_H
#define AMATERIA_H
#include <iostream>
#include <string>
#include "ICharacter.hpp"

// Class definition 
class aMateria
{
protected: 
	std::string type;
 
public: 
// Constructor 
	aMateria(); 
	aMateria( const aMateria &rhs); 
	aMateria(std::string newType);
	~aMateria(); 
	aMateria& operator=( const aMateria &rhs);
//Getters 
	std::string const & getType() const; 
//Setters 
	void setType(std::string type); 
// ToString Method 
	void toString();

	virtual aMateria* clone() const = 0;
	virtual void use(ICharacter & target);
}; 
 
#endif
