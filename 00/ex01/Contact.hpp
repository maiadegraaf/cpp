#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Contact
{
private:
	string	FirstName;
	string	SecondName;
	string	Nickname;
	int		PhoneNumber;
	string	DarkestSecret;
public:
	Contact();
	void	NewContact();
	void	PrintContactRow();
	void	PrintContact();
	// ~Contact();
};

// Contact::~Contact()
// {
// }

#endif // __CONTACT_H__