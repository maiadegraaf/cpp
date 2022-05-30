#ifndef ShrubberyCREATIONFORM_H
#define ShrubberyCREATIONFORM_H
#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

// Class definition 
class ShrubberyCreationForm : public Form
{
private: 
	std::string target;
 
public: 
// Constructor 
	ShrubberyCreationForm(); 
	ShrubberyCreationForm( const ShrubberyCreationForm &rhs); 
	ShrubberyCreationForm(std::string newTarget);
	~ShrubberyCreationForm(); 
	ShrubberyCreationForm& operator=( const ShrubberyCreationForm &rhs); 
//Getters 
	std::string getTarget(); 
//Setters 
	void setTarget(std::string target); 
// ToString Method 
	void toString(); 
// Create Shrubbery
	void execute(Bureaucrat const & executor) const;
}; 

#endif
