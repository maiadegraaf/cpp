#include "CpFile.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1 || argc > 4)
	{
		std::cout << "Expected input: <filename> <std::stringto be replaced> <new string>" << std::endl;
		return 0;
	}
	CpFile Input;
	Input.parseInput(argv[1], argv[2], argv[3]);
	Input.readFile();
}