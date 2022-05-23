#include "Contact.hpp"

Contact::Contact()
{
	Clear();
}

void	Contact::Clear()
{
	FirstName = "**EMPTY**";
	SecondName = "**EMPTY**";
	Nickname = "**EMPTY**";
	PhoneNumber = "**EMPTY**";
	DarkestSecret = "**EMPTY**";
	Empty = true;
}


void	Contact::New()
{
	std::cout << "First Name: " << std::endl;
	do {
		getline(std::cin, FirstName);
	} while(FirstName == "");
	std::cout << "Second Name: " << std::endl;
	do {
		getline(std::cin, SecondName);
	} while(SecondName == "");
	std::cout << "Nickname: " << std::endl;
	do {
		getline(std::cin, Nickname);
	} while(Nickname == "");
	std::cout << "Phone Number: " << std::endl;
	do {
		getline(std::cin, PhoneNumber);
	} while(PhoneNumber == "");
	std::cout << "Darkest Secret: " << std::endl;
	do {
		getline(std::cin, DarkestSecret);
	} while(DarkestSecret == "");
	Empty = false;
}

inline std::string	Truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	Contact::PrintRow()
{
	std::cout << "|" << std::setw(10) << Truncate(FirstName);
	std::cout << "|" << std::setw(10) << Truncate(SecondName);
	std::cout << "|" << std::setw(10) << Truncate(Nickname);
	std::cout << "|" << std::endl;
}

void	Contact::Print()
{
	std::cout << std::endl;
	if (IsEmpty())
	{
		std::cout << "This contact does not exist yet." << std::endl;
		return ;
	}
	std::cout << FirstName << std::endl;
	std::cout << SecondName << std::endl;
	std::cout << Nickname << std::endl;
	std::cout << PhoneNumber << std::endl;
	std::cout << DarkestSecret << std::endl;
}