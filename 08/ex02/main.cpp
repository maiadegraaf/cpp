#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> laStack;

	for(int i = 0; i < 45; i += 5)
		laStack.push(i);
	std::cout << *laStack.begin() << std::endl;
	std::cout << *laStack.end() << std::endl;
}