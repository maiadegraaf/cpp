#include "AMateria.hpp"
// Constructor initializes attributes to 0 by default 
AMateria::AMateria()
	: type(0) {}
 
AMateria::AMateria( const AMateria& rhs)
{
	*this = rhs;
}
 
AMateria::AMateria(std::string newType) 
	: type(newType) {}

AMateria::~AMateria()
{

}

AMateria&	AMateria::operator=( const AMateria& rhs )
{
	*this = rhs;
	return *this;
}

//Getters 
std::string const &AMateria::getType() const
{
	return type;
}
 
//Setters 
void AMateria::setType(std::string newType) { type= newType; }
 
// toString 
void AMateria::toString()
{
	std::cout << "type" << type << std::endl; 
}

void AMateria::use(ICharacter & target)
{
	std::cout << " * uses materia on " << target.getName() << " *" << std::endl;
}
