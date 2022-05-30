#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <exception>
 
// Class definition 
class Bureaucrat
{
private: 
	const std::string name;
	int grade;
 
public: 
// Constructor 
	Bureaucrat(); 
	Bureaucrat( const Bureaucrat &rhs); 
	Bureaucrat(std::string newName, int newGrade);
	~Bureaucrat(); 
	Bureaucrat& operator=( const Bureaucrat &rhs); 
//Getters 
	const std::string getName() const; 
	int getGrade() const ; 
//Setters 
	void setGrade(int grade); 
//Increment
	void operator++(void);
	void operator--(void);
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
}; 

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
