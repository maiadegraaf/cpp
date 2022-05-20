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
	cin	>> FirstName;
	cout << "Second Name: " << endl;
	cin	>> SecondName;
	cout << "Nickname: " << endl;
	cin	>> Nickname;
	cout << "Phone Number: " << endl;
	cin >> PhoneNumber;
	cout << "Darkest Secret: " << endl;
	cin >> DarkestSecret;
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
	cout << "\n" << FirstName << endl;
	cout << SecondName << endl;
	cout << Nickname << endl;
	cout << PhoneNumber << endl;
	cout << DarkestSecret << endl;
}