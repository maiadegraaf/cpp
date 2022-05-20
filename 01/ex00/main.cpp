#include "Zombie.hpp"

int main(void)
{
	string	newNames[] = {"George", "Ringo", "John", "Paul"};
	string	chumpNames[] = {"Mick", "Kieth", "Brian", "Bill", "Charlie"};
	cout << "\033[1;37mThe NEW" << endl;
	for (int i = 0; i < 4; i++)
	{
		Zombie *tmp = newZombie(newNames[i]);
		tmp->announce();
		tmp->destruct();
		delete(tmp);
	}
	cout << "\033[1;37mThe CHUMPS" << endl;
	for (int i = 0; i < 5; i++)
		randomChump(chumpNames[i]);
}