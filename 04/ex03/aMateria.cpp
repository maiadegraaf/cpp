#include "aMateria.hpp"
// Constructor initializes attributes to 0 by default 
aMateria::aMateria()
	: type(0) {}
 
aMateria::aMateria( const aMateria& rhs)
{
	*this = rhs;
}
 
aMateria::aMateria(std::string newType) 
	: type(newType) {}

aMateria::~aMateria()
{

}

aMateria&	aMateria::operator=( const aMateria& rhs )
{
	return *this;
}

//Getters 
std::string const &aMateria::getType() const
{
	return type;
}
 
//Setters 
void aMateria::setType(std::string newType) { type= newType; }
 
// toString 
void aMateria::toString()
{
  cout << "type" << type << endl; 
}


aMateria* aMateria::clone() const = 0
{
	aMateria *cln = new aMateria;
	cln = *this;
	return cln;
}
