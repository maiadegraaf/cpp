#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
 
class Bureaucrat;
// Class definition 
class Form
{
private: 
	const std::string name;
	bool isSigned;
	const int gradeSigned;
	const int gradeExec;

public: 
// Constructor 
	Form(); 
	Form( const Form &rhs); 
	Form(const std::string newName, const int newGradeSigned, const int newGradeExec);
	virtual ~Form(); 
	Form& operator=( const Form &rhs); 
//Getters 
	const std::string getName() const; 
	bool getIsSigned() const; 
	int getGradeSigned() const; 
	int getGradeExec() const; 
//Setters 
	void setIsSigned(bool isSigned); 
// ToString Method 
	void toString(); 
// Exception
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw ();
	};
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw ();
	};
	class FormAlreadySignedException : public std::exception
	{
		const char *what() const throw ();
	};
	class FormNotYetSignedException : public std::exception
	{
		const char *what() const throw ();
	};
// Bureaucratic stuff
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;
	void	checkPermissions(Bureaucrat const & executor) const;
}; 

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
