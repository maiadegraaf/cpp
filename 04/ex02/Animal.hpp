#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal( const Animal& rhs );
		Animal(std::string nType);
		virtual ~Animal();
		Animal&				operator=( const Animal& rhs );
		virtual void		makeSound() const = 0;
		std::string			getType() const;
};

#endif // __ANIMAL_H__