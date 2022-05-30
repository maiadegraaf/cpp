#include "Ice.hpp"
// Constructor initializes attributes to 0 by default 
Ice::Ice()
	: AMateria("Ice")
{}
 
Ice::Ice( const Ice& rhs)
{
	*this = rhs;
}

Ice::~Ice()
{

}

Ice&	Ice::operator=( const Ice& rhs )
{
	return *this;
}

AMateria* Ice::clone() const
{
	
}
