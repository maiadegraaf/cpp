#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

class Contact
{
private:
	string	FirstName;
	string	SecondName;
	string	Nickname;
	string	PhoneNumber;
	string	DarkestSecret;
	bool	Empty;
public:
	Contact();
	void	New();
	void	PrintRow();
	void	Print();
	bool	IsEmpty() {return (Empty);};
	void	Clear();
	// ~Contact();
};

// Contact::~Contact()
// {
// }

#endif // __CONTACT_H__