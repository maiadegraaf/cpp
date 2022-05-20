#include "Zombie.hpp"

int main(void)
{
	string hordeName;
	cout << "What would you like to name your Zombie babies?" << endl;
	getline(cin, hordeName);
	cin.clear();
	int	N;
	cout << "How many Zombie babies would you like?" << endl;
	cin >> N;
	while (!cin.good())
	{
		cout << "\nThats not a number!?" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> N;
	}
	Zombie *horde = zombieHorde(N, hordeName);
	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << ": ";
		horde[i].announce();
	}
	delete[](horde);
}