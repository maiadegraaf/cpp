#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
 
// Class definition 
class MateriaSource : public IMateriaSource
{
private: 
	AMateria* sources[4];
 
public: 
// Constructor 
	MateriaSource(); 
	MateriaSource( const MateriaSource &rhs); 
	~MateriaSource(); 
	MateriaSource& operator=( const MateriaSource &rhs); 

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
}; 
 
#endif
