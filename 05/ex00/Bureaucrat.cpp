#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: name("Default"), grade(150)
{
}
 
Bureaucrat::Bureaucrat( const Bureaucrat& rhs)
	: name(rhs.name), grade(rhs.grade)
{
}
 
Bureaucrat::Bureaucrat(std::string newName, int newGrade) 
	: name(newName)
{
	setGrade(newGrade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << *this << " was fired." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs )
{
	grade = rhs.getGrade();
	return *this;
}

const std::string Bureaucrat::getName() const { return name; }

//Getters 
int Bureaucrat::getGrade() const { return grade; }
 
//Setters 
void Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
	grade = newGrade;
}


void Bureaucrat::operator--(void)
{
	setGrade(grade - 1);
}

void Bureaucrat::operator++(void)
{
	setGrade(grade + 1);
}
 
// toString 
void Bureaucrat::toString()
{
  std::cout << "name : " << name << std::endl; 
  std::cout << "grade : " << grade << std::endl; 
}
 
const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}