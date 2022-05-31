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

void Form::checkPermissions(Bureaucrat const & executor) const
{
	if (!isSigned)
		throw FormNotYetSignedException();
	if (executor.getGrade() > gradeExec)
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

const char *Form::FormNotYetSignedException::what() const throw ()
{
	return "the form isn't signed yet!";
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", form sign grade " << obj.getGradeSigned() << ", execute sign grade " << obj.getGradeSigned();
	if (obj.getIsSigned())
		os << ", and the form IS signed";
	else
		os << ", and the form is NOT signed";
	return os;
}