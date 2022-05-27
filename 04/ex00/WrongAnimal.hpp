#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& rhs );
		WrongAnimal(std::string nType);
		~WrongAnimal();
		WrongAnimal&				operator=( const WrongAnimal& rhs );
		void		makeSound() const;
		std::string			getType() const;
};

#endif // __WRONGANIMAL_H__