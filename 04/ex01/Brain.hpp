#ifndef __BAIN_H__
#define __BAIN_H__
#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain( const Brain& rhs );
		~Brain();
		Brain&	operator=( const Brain& rhs );
};

#endif // __BAIN_H__