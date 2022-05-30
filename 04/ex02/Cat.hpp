#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		Cat( const Cat& rhs );
		~Cat();
		Cat&	operator=( const Cat& rhs );
		void	makeSound(void) const;
};

#endif // __CAT_H__