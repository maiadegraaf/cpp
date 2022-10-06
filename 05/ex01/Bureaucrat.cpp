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
	std::cout << name << " was hired at grade: " << grade << std::endl;
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
	if (newGrade < HighGrade)
		throw GradeTooHighException();
	else if (newGrade > LowGrade)
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

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signed:\n" << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn't sign " << BLUE << f.getName() << RESET_COLOR << " because " << RED << e.what() << RESET_COLOR << '\n';
	}
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