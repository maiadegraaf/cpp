#include "Intern.hpp"
// Constructor initializes attributes to 0 by default 
Intern::Intern()
{
}
 
Intern::Intern( const Intern& rhs)
{
	*this = rhs;
}
 
Intern::~Intern()
{
}

Intern&	Intern::operator=( const Intern& rhs )
{
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target) const
{
	
}

