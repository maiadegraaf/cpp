#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>


class Contact
{
private:
	std::string	FirstName;
	std::string	SecondName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
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