#include "easyfind.hpp"
#include <iostream>
#include <array>

int main()
{
	std::array<int, 4> arr = {1, 2, 3, 4};
	try
	{
		int i = *easyfind(arr, 1);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int i = *easyfind(arr, 2);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
	std::cerr << e.what() << '\n';
	}
	try
	{
		int i = *easyfind(arr, 5);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}