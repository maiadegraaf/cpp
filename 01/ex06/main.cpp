#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Harl you have to speak or I won't know how to respond." << std::endl;
		return 0;
	}
	Harl	buddy;
	buddy.complain(buddy.returnLevel(argv[1]));
}