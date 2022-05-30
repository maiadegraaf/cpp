#include "Cure.hpp"
// Constructor initializes attributes to 0 by default 
Cure::Cure()
	: AMateria("Cure")
{}
 
Cure::Cure( const Cure& rhs)
{
	*this = rhs;
}

Cure::~Cure()
{

}

Cure&	Cure::operator=( const Cure& rhs )
{
	return *this;
}

AMateria* Cure::clone() const
{
	
}
