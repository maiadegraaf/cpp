#include "megaphone.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; argv[i] != '\0'; i++)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (char) toupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
