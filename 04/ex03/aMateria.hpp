#ifndef AMateria_H
#define AMateria_H
#include <iostream>
#include <string>
#include "ICharacter.hpp"

// Class definition 
class AMateria
{
protected: 
	std::string type;
 
public: 
// Constructor 
	AMateria(); 
	AMateria( const AMateria &rhs); 
	AMateria(std::string newType);
	virtual	~AMateria(); 
	AMateria& operator=( const AMateria &rhs);
//Getters 
	std::string const & getType() const; 
//Setters 
	void setType(std::string type); 
// ToString Method 
	void toString();

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
}; 
 
#endif
