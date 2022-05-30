#include "MateriaSource.hpp"
// Constructor initializes attributes to 0 by default 
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		sources[i] = nullptr;
}
 
MateriaSource::MateriaSource( const MateriaSource& rhs)
{
	for (int i = 0; i < 4; i++)
		sources[i] = rhs.sources[i];
}

MateriaSource::~MateriaSource()
{
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs )
{
	for (int i = 0; i < 4; i++)
		sources[i] = rhs.sources[i];
	return *this;
}

void MateriaSource::learnMateria(AMateria* s)
{
	for (int i = 0; i < 4; i++)
	{
		if (sources[i] == nullptr)
		{
			sources[i] = s;
			std::cout << i << " = " << s->getType() << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (sources[i] && sources[i]->getType() == type)
			return sources[i];
	}
	return nullptr;
}

