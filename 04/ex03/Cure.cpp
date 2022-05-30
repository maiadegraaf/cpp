#include "Cure.hpp"
// Constructor initializes attributes to 0 by default 
Cure::Cure()
	: AMateria("cure")
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
	(void) rhs;
	return *this;
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
