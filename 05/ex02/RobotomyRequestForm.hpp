#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include <iostream>
#include <string>
#include "Form.hpp"
 
// Class definition 
class RobotomyRequestForm : public Form
{
private: 
	std::string target;
 
public: 
// Constructor 
	RobotomyRequestForm(); 
	RobotomyRequestForm( const RobotomyRequestForm &rhs); 
	RobotomyRequestForm(std::string newTarget);
	~RobotomyRequestForm(); 
	RobotomyRequestForm& operator=( const RobotomyRequestForm &rhs); 
//Getters 
	std::string getTarget(); 
//Setters 
	void setTarget(std::string target); 
// ToString Method 
	void toString(); 
// Perform Robotomy
	void execute(Bureaucrat const & executor) const;
}; 
 
#endif
