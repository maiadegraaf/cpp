#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include <string>
#include "Form.hpp"
 
// Class definition 
class Intern
{
private: 
 
public: 
// Constructor 
	Intern(); 
	Intern( const Intern &rhs); 
	~Intern(); 
	Intern& operator=( const Intern &rhs); 
	Form *makeForm(std::string name, std::string target) const;
}; 
 
#endif
