#include "megaphone.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for(int i = 1; argv[i] != '\0'; i++)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
				cout << (char) toupper(argv[i][j]);
			cout << " ";
		}
		cout << endl;
	}
	return (0);
}
