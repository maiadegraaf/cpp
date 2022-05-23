#ifndef __CpFile_H__
#define __CpFile_H__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <stdlib.h>
#include <fstream>


class CpFile
{
private:
	std::ifstream	file1;
	std::ofstream	file2;
	std::string	s1;
	std::string	s2;
public:
	int		parseInput(std::string filename1, std::string newS1, std::string newS2);
	std::string determineStr(std::string input);
	void	readFile();
};

#endif // __CpFile_H__