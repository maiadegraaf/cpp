#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* doggo = new Dog();
	const Animal* kitty = new Cat();
	delete doggo;//should not create a leak
	delete kitty;
	const Animal* aBunch[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		if (i < 2)
			aBunch[i] = new Dog();
		else
			aBunch[i] = new Cat();
	}
	for (i = 0; i < 4; i++)
	{
		delete(aBunch[i]);
	}
	return 0;
}