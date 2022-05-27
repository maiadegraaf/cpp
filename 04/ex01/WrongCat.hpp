#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
		
	public:
		WrongCat();
		WrongCat( const WrongCat& rhs );
		~WrongCat();
		WrongCat&	operator=( const WrongCat& rhs );
		void	makeSound(void) const;
};

#endif // __WRONGCAT_H__