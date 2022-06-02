#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> laStack;

	for(int i = 0; i < 50; i += 5)
		laStack.push(i);
	MutantStack<int>::iterator list = laStack.begin();
	std::cout << "BEGIN: " << *list << std::endl;
	MutantStack<int>::iterator last = laStack.end();
	std::cout << "END: " << *last << std::endl;
	std::cout << "\nLIST: "<< std::endl;
	while(list != last)
	{
		std::cout << *list << std::endl;
		list++;
	}
	std::cout << *list << std::endl;

}