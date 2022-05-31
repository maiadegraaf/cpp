#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 1 | argc > 2)
	{
		std::cout << "Expected input: <char, int, float, or double to convert>" << std::endl;
		return 0;
	}
	std::string input = std::string(argv[1]);
	Convert basic;
	if (basic.checkAll(input) == EXIT_FAILURE)
	{
		std::cout << "[ " << input << " ] is not a char, int, float or double and is therefore impossible." << std::endl;
		return 0;
	}
	basic.setRest();
	std::cout << basic << std::endl;
}