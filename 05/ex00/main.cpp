#include "Bureaucrat.hpp"

void	incrementWhilePos()
{
	Bureaucrat Henry("Henry", 145);
	std::cout << Henry << std::endl;
	for (int i = 0; i < 100; i++)
	{
		try
		{
			++Henry;
			std::cout << Henry << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
	}
}

void	decrementWhilePos()
{
	Bureaucrat Sam("Sam", 5);
	std::cout << Sam << std::endl;
	for (int i = 0; i < 100; i++)
	{
		try
		{
			--Sam;
			std::cout << Sam << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
	}
}

int main(void)
{
	std::cout << "--------------[  grade = 0  ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[ grade = 151 ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[  grade = 1  ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[   default   ]--------------" << std::endl;
	try
	{
		Bureaucrat Bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------[  INCREMENT  ]--------------" << std::endl;
	incrementWhilePos();
	std::cout << "--------------[  DECREMENT  ]--------------" << std::endl;
	decrementWhilePos();
	return (0) ;
}