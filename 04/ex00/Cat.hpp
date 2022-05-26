#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"

class Cat : public Animal {
	private:
		
	public:
		Cat();
		Cat( const Cat& rhs );
		~Cat();
		Cat&	operator=( const Cat& rhs );
		void	makeSound(void);
};

#endif // __CAT_H__