#include "Span.hpp"

int main(void)
{
	Span bla(100000);

	for (int i = 0; i < 100000; i++)
		bla.addNumber(rand() % 5000);
	try
	{
		bla.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bla.longestSpan() << std::endl;
	std::cout << bla.shortestSpan() << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span test(2000000);
	test.addNumbers();
	std::cout << test.longestSpan() << std::endl;
	std::cout << test.shortestSpan() << std::endl;
}

