#include "CpFile.hpp"

int	CpFile::parseInput(std::string filename1, std::string newS1, std::string newS2)
{
	file1.open(filename1, std::ios::out);
	if (!file1.is_open())
	{
		std::cout << "Unable to open file." << std::endl;
		return (EXIT_FAILURE);
	}
	file2.open(filename1 + ".replace", std::ios::in | std::ios::trunc);
	if (!file2.is_open())
	{
		std::cout << "Unable to create new file." << std::endl;
		file1.close();
		return (EXIT_FAILURE);
	}
	s1 = newS1;
	s2 = newS2;
	return (EXIT_SUCCESS);
}

std::string CpFile::determineStr(std::string input)
{
	size_t loc = input.find(s1);
	while (loc != std::string::npos)
	{
		input.erase(loc, s1.length());
		input.insert(loc, s2);
		loc = input.find(s1);
	}
	return (input);
}

void	CpFile::readFile()
{
	std::string line;
	while(getline(file1, line))
		file2 << determineStr(line) << std::endl;
	file1.close();
	file2.close();
}