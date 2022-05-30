#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include <iostream>
#include <string>
#include "Form.hpp"
 
// Class definition 
class PresidentialPardonForm : public Form
{
private: 
	std::string target;
 
public: 
// Constructor 
	PresidentialPardonForm(); 
	PresidentialPardonForm( const PresidentialPardonForm &rhs); 
	PresidentialPardonForm(std::string newTarget);
	~PresidentialPardonForm(); 
	PresidentialPardonForm& operator=( const PresidentialPardonForm &rhs); 
//Getters 
	std::string getTarget(); 
//Setters 
	void setTarget(std::string target); 
// ToString Method 
	void toString(); 
// Pardon President
	void execute(Bureaucrat const & executor) const;
}; 
 
#endif
