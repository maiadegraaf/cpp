#include "Zombie.hpp"

int main(void)
{
	std::string newNames[] = {"George", "Ringo", "John", "Paul"};
	std::string chumpNames[] = {"Mick", "Kieth", "Brian", "Bill", "Charlie"};
	std::cout << "\033[1;37mThe NEW" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Zombie *tmp = newZombie(newNames[i]);
		tmp->announce();
		tmp->destruct();
		delete(tmp);
	}
	std::cout << "\033[1;37mThe CHUMPS" << std::endl;
	for (int i = 0; i < 5; i++)
		randomChump(chumpNames[i]);
}