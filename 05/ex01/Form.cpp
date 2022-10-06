#include "Form.hpp"
// Constructor initializes attributes to 0 by default 
Form::Form()
	: name("Default"), isSigned(false), gradeSigned(0), gradeExec(0)
{

}
 
Form::Form( const Form& rhs)
	: name(rhs.name), isSigned(rhs.isSigned), gradeSigned(rhs.gradeSigned), gradeExec(rhs.gradeExec)
{
}
 
Form::Form(const std::string newName, const int newGradeSigned, const int newGradeExec) 
	: name(newName), isSigned(false), gradeSigned(newGradeSigned), gradeExec(newGradeExec)
{
	if (newGradeSigned < HighGrade)
		throw GradeTooHighException();
	else if (newGradeSigned > LowGrade)
		throw GradeTooLowException();
	if (newGradeExec < HighGrade)
		throw GradeTooHighException();
	else if (newGradeExec > LowGrade)
		throw GradeTooLowException();
	std::cout << "FORM CREATED:\n" << *this << std::endl;
}

Form::~Form()
{
	std::cout << name << " was destroyed. " << std::endl;
}

Form&	Form::operator=( const Form& rhs )
{
	isSigned = rhs.isSigned;
	return *this;
}

//Getters 
const std::string Form::getName() const { return name; }
bool Form::getIsSigned() const { return isSigned; }
int Form::getGradeSigned() const { return gradeSigned; }
int Form::getGradeExec() const { return gradeExec; }
 
//Setters 
void Form::setIsSigned(bool newIsSigned) { isSigned = newIsSigned; }
 
// toString 
void Form::toString()
{
  std::cout << "name : " << name << std::endl; 
  std::cout << "isSigned : " << isSigned << std::endl; 
  std::cout << "gradeSigned : " << gradeSigned << std::endl; 
  std::cout << "gradeExec : " << gradeExec << std::endl; 
}

void Form::beSigned(Bureaucrat &b)
{
	if (isSigned)
		throw FormAlreadySignedException();
	if (b.getGrade() <= gradeSigned)
		setIsSigned(true);
	else
		throw GradeTooLowException();
}
 
const char *Form::GradeTooHighException::what() const throw ()
{
	return "the necessary grade is not high enough.";
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return "the necessary grade is too low.";
}

const char *Form::FormAlreadySignedException::what() const throw ()
{
	return "the form has already been signed!";
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "name: " << obj.getName() << std::endl; 
	os << "isSigned: ";
	if (obj.getIsSigned())
		os << GREEN << "YES" << RESET_COLOR << std::endl;
	else
		os << RED << "NO" << RESET_COLOR << std::endl;
	os << "gradeSigned: " << obj.getGradeSigned() << std::endl; 
	os << "gradeExec: " << obj.getGradeExec() << std::endl; 
	return os;
}