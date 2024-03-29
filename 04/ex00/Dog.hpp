#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"

class Dog : public Animal {
	private:
		
	public:
		Dog();
		Dog( const Dog& rhs );
		~Dog();
		Dog&	operator=( const Dog& rhs );
		void	makeSound(void) const;
};

#endif // __DOG_H__