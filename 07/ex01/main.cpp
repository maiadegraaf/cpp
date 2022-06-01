#include "iter.hpp"

template<typename T>
void print(T c)
{
	std::cout << c << std::endl;
}

int main(void)
{
	char cArr[] = {'a', 'b', 'c', 'd'};
	int iArr[] = {1, 2, 3, 4, 5};

	iter(cArr, 4, print);
	iter(iArr, 5, print);
}