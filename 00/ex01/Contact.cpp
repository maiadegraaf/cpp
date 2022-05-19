#include "Contact.hpp"

Contact::Contact()
{
	FirstName = "**EMPTY**";
	SecondName = "**EMPTY**";
	Nickname = "**EMPTY**";
	PhoneNumber = 0;
	DarkestSecret = "**EMPTY**";
}

void	Contact::NewContact()
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

void	Contact::PrintContactRow()
{
	cout << "|" << setw(10) << Truncate(FirstName);
	cout << "|" << setw(10) << Truncate(SecondName);
	cout << "|" << setw(10) << Truncate(Nickname);
	cout << "|" << endl;
}

void	Contact::PrintContact()
{
	cout << "\n" << FirstName << endl;
	cout << SecondName << endl;
	cout << Nickname << endl;
	cout << PhoneNumber << endl;
	cout << DarkestSecret << endl;
}