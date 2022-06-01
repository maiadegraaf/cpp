#include "Convert.hpp"

void	impossible(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1 | argc > 2)
	{
		std::cout << "Expected input: <char, int, float, or double to convert>" << std::endl;
		return 0;
	}
	std::string input = std::string(argv[1]);
	if (input == "nan" || input == "-inf" || input == "+inf")
	{
		impossible();
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return 0;
	}
	if (input == "nanf" || input == "-inff" || input == "+inff")
	{
		impossible();
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, input.length() - 1) << std::endl;
		return 0;
	}
	Convert basic;
	if (basic.checkAll(input) == EXIT_FAILURE)
	{
		std::cout << "[ " << input << " ] is not a char, int, float or double and is therefore impossible to convert." << std::endl;
		return 0;
	}
	basic.setRest();
	std::cout << basic << std::endl;
}