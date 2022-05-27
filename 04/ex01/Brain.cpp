#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "BLANK";
	std::cout << "A brain full of blank ideas has been constructed" << std::endl;
}

Brain::Brain(const Brain& rhs) : ideas(rhs.ideas)
{
	std::cout << "A brain has been copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A brain has been destructed" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	std::cout << "A brain has been copied through assignment" << std::endl;
	return *this;
}
