#include "Zombie.hpp"

int main(void)
{
	std::string hordeName;
	std::cout << "What would you like to name your Zombie babies?" << std::endl;
	getline(std::cin, hordeName);
	std::cin.clear();
	int	N;
	std::cout << "How many Zombie babies would you like?" << std::endl;
	std::cin >> N;
	while (!std::cin.good())
	{
		std::cout << "\nThats not a number!?" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> N;
	}
	Zombie *horde = zombieHorde(N, hordeName);
	for (int i = 0; i < N; i++)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
	}
	delete[](horde);
}