#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog();
		Dog( const Dog& rhs );
		~Dog();
		Dog&	operator=( const Dog& rhs );
		void	makeSound(void) const;
};

#endif // __DOG_H__