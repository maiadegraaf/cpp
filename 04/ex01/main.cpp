#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* aBunch= new Animal[100];
	int i;
	for (i = 0; i < 100; i++);
	{
		if (i < 50)
			aBunch[i] = new Dog();
		else
			aBunch[i] = new Cat();
	}
	return 0;
}