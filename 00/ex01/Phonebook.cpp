#include "Phonebook.hpp"

void	Phonebook::PrintContactList()
{
	cout << "\n\nContact List:" << endl;
	cout << "\n|"<< setw(10) << "INDEX  ";
	cout << "|" << setw(10) << "1st NAME ";
	cout << "|" << setw(10) << "2nd NAME ";
	cout << "|" << setw(10) << "NICKNAME ";
	cout << "|" << endl;
	for(int i = 0; i < 8; i++)
	{
		cout << "|" << setw(10) << i + 1;
		Contacts[i].PrintRow();
	}
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
	Contacts[index - 1].Print();
	cout << endl;
}

void	Phonebook::Add()
{
	if (!pb.Contacts[7].IsEmpty())
	{
		cout << "The phone book has reached capacity. The following contact" << endl;
		cout << "will be deleted:" << endl;
		pb.Contacts[7].Print();
		cout << "\nEnter Y to continue." << endl;
		string Response;
		getline(cin, Response);
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
	cout << endl;
}

void	RunPhoneBook(string Response)
{
	cin.clear();
	if (!Response.compare("ADD"))
		pb.Add();
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
}

void	PrintTitle()
{
	cout << "\n██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗" << endl;
	cout << "██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝" << endl;
	cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░" << endl;
	cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░" << endl;
	cout << "██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗" << endl;
	cout << "╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝" << endl;
}

int main(void)
{
	PrintTitle();
	cout << "\n\t\t  Welcome to My Awesome Phonebook!!\n" << endl;
	cout << setfill('*') << setw(73) << "" << endl;
	cout << "\nThe available commands are:" << endl;
	cout << " * ADD\t\tCreate a new contact." << endl;
	cout << " * SEARCH\tView and find contacts." << endl;
	cout << " * EXIT\t\tExit the program.\n" << endl;
	cout << setw(74) << "\n" << setfill(' ') <<endl;
	string	Response;
	while (getline(cin, Response))
		RunPhoneBook(Response);
	return 0;
}
