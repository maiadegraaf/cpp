#include "Phonebook.hpp"

void	Phonebook::PrintContactList()
{
	std::cout << "\n\nContact List:" << std::endl;
	std::cout << "\n|"<< std::setw(10) << "INDEX  ";
	std::cout << "|" << std::setw(10) << "1st NAME ";
	std::cout << "|" << std::setw(10) << "2nd NAME ";
	std::cout << "|" << std::setw(10) << "NICKNAME ";
	std::cout << "|" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		Contacts[i].PrintRow();
	}
}

void	Phonebook::Search()
{
	std::cout << "\nPlease enter the index of the contact you would like to examine:" << std::endl;
	int	index;
	std::cin >> index;
	if (!std::cin.good() || index > 8)
	{
		std::cout << "\nThat index doesn't exist." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		pb.Search();
		return ;
	}
	Contacts[index - 1].Print();
	std::cout << std::endl;
}

void	Phonebook::Add()
{
	if (!pb.Contacts[7].IsEmpty())
	{
		std::cout << "The phone book has reached capacity. The following contact" << std::endl;
		std::cout << "will be deleted:" << std::endl;
		pb.Contacts[7].Print();
		std::cout << "\nEnter Y to continue." << std::endl;
		std::string	Response;
		getline(std::cin, Response);
		if (!Response.compare("Y"))
			pb.Contacts[7].Clear();
		else
			return ;
	}
	if (!pb.Contacts[0].IsEmpty())
	{
		int i = 7;
		Contact First = pb.Contacts[0];
		pb.Contacts[0] = pb.Contacts[7];
		while (i > 1)
		{
			pb.Contacts[i] = pb.Contacts[i - 1];
			i--;
		}
		pb.Contacts[1] = First;
	}
	pb.Contacts[0].New();
	std::cout << std::endl;
}

void	RunPhoneBook(std::string Response)
{
	std::cin.clear();
	if (!Response.compare("ADD"))
		pb.Add();
	else if (!Response.compare("SEARCH"))
	{
		pb.PrintContactList();
		pb.Search();
	}
	else if (!Response.compare("EXIT"))
	{
		std::cout << "👋" << std::endl;
		exit(EXIT_SUCCESS);
	}
}

void	PrintTitle()
{
	std::cout << "\n██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗" << std::endl;
	std::cout << "██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░" << std::endl;
	std::cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░" << std::endl;
	std::cout << "██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗" << std::endl;
	std::cout << "╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝" << std::endl;
}

int main(void)
{
	PrintTitle();
	std::cout << "\n\t\t  Welcome to My Awesome Phonebook!!\n" << std::endl;
	std::cout << std::setfill('*') << std::setw(73) << "" << std::endl;
	std::cout << "\nThe available commands are:" << std::endl;
	std::cout << " * ADD\t\tCreate a new contact." << std::endl;
	std::cout << " * SEARCH\tView and find contacts." << std::endl;
	std::cout << " * EXIT\t\tExit the program.\n" << std::endl;
	std::cout << std::setw(74) << "\n" << std::setfill(' ') <<std::endl;
	std::string	Response;
	while (getline(std::cin, Response))
		RunPhoneBook(Response);
	return 0;
}
