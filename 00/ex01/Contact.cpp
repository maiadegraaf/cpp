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
	cout << "First Name: " << endl;
	do {
		getline(cin, FirstName);
	} while(FirstName == "");
	cout << "Second Name: " << endl;
	do {
		getline(cin, SecondName);
	} while(SecondName == "");
	cout << "Nickname: " << endl;
	do {
		getline(cin, Nickname);
	} while(Nickname == "");
	cout << "Phone Number: " << endl;
	do {
		getline(cin, PhoneNumber);
	} while(PhoneNumber == "");
	cout << "Darkest Secret: " << endl;
	do {
		getline(cin, DarkestSecret);
	} while(DarkestSecret == "");
	Empty = false;
}

inline string	Truncate(string	str)
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
	cout << "|" << setw(10) << Truncate(FirstName);
	cout << "|" << setw(10) << Truncate(SecondName);
	cout << "|" << setw(10) << Truncate(Nickname);
	cout << "|" << endl;
}

void	Contact::Print()
{
	cout << endl;
	if (IsEmpty())
	{
		cout << "This contact does not exist yet." << endl;
		return ;
	}
	cout << FirstName << endl;
	cout << SecondName << endl;
	cout << Nickname << endl;
	cout << PhoneNumber << endl;
	cout << DarkestSecret << endl;
}