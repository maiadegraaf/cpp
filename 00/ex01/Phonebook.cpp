#include "Phonebook.hpp"

void	Phonebook::PrintContactList()
{
	cout << "\n...\n\nContact List:" << endl;
	cout << "\n|"<< setw(10) << "INDEX ";
	cout << "|" << setw(10) << "1st NAME ";
	cout << "|" << setw(10) << "2nd NAME ";
	cout << "|" << setw(10) << "NICKNAME";
	cout << "|" << endl;
	for(int i = 0; i < 8; i++)
	{
		cout << "|" << setw(10) << i + 1;
		Contacts[i].PrintContactRow();
	}
	// cout << setfill('_') << setw(46) << "\n" << setfill(' ') <<endl;
}

void	Phonebook::Search()
{
	cout << "\nPlease enter the index of the contact you would like to examine:" << endl;
	int	index;
	cin >> index;
	if (!cin.good() || index > 8)
	{
		cout << "\nThat index doesn't exist." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		pb.Search();
		return ;
	}
	Contacts[index - 1].PrintContact();
	cout << endl;
}

void	RunPhoneBook()
{
	string	Response;

	cin >> Response;
	if (!Response.compare("ADD"))
	{

	}
	else if (!Response.compare("SEARCH"))
	{
		pb.PrintContactList();
		pb.Search();
	}
	else if (!Response.compare("EXIT"))
	{
		cout << "👋" << endl;
		exit(EXIT_SUCCESS);
	}
	RunPhoneBook();
}

void	PrintTitle()
{
	cout << "██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗" << endl;
	cout << "██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝" << endl;
	cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░" << endl;
	cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░" << endl;
	cout << "██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗" << endl;
	cout << "╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝" << endl;
}

int main(void)
{
	PrintTitle();
	cout << "\nWelcome to My Awesome Phonebook!!\n" << endl;
	cout << setfill('*') << setw(55) << "" << endl;
	cout << "The available commands are:" << endl;
	cout << " * ADD: Create a new contact." << endl;
	cout << " * SEARCH: View and find contacts." << endl;
	cout << " * EXIT: Exit the program." << endl;
	cout << setw(55) << "\n" << setfill(' ') <<endl;
	RunPhoneBook();
	return 0;
}

