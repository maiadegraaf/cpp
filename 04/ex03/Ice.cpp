#include "Ice.hpp"
// Constructor initializes attributes to 0 by default 
Ice::Ice()
	: AMateria("ice")
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
	(void) rhs;
	return *this;
}

Ice* Ice::clone() const
{
	Ice *ret = new Ice;
	*ret = *this;
	return ret;
}

void Ice::use(ICharacter& target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}
