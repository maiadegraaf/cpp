#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include <string>
#include <iostream>
#include <limits>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact	Contacts[8];
public:
	void	PrintContactList();
	void	Search();
	void	Add();
	// Phonebook(/* args */);
	// ~Phonebook();
} pb;

// Phonebook::Phonebook(/* args */)
// {
// }

// Phonebook::~Phonebook()
// {
// }


#endif // __PHONEBOOK_H__