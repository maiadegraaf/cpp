#include "Intern.hpp"
// Constructor initializes attributes to 0 by default 
Intern::Intern()
{
}
 
Intern::Intern( const Intern& rhs)
{
	*this = rhs;
}
 
Intern::~Intern()
{
}

Intern&	Intern::operator=( const Intern& rhs )
{
	(void) rhs;
	return *this;
}

Form	*shrubberyCreation(std::string target)
{
	ShrubberyCreationForm	*ret = new ShrubberyCreationForm(target);
	return (ret);
}

Form	*robotomyRequest(std::string target)
{
	RobotomyRequestForm	*ret = new RobotomyRequestForm(target);
	return (ret);
}

Form	*presidentialPardon(std::string target)
{
	PresidentialPardonForm	*ret = new PresidentialPardonForm(target);
	return (ret);
}

Form* Intern::makeForm(std::string name, std::string target) const
{
	std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(*forms[])(std::string) = {shrubberyCreation, robotomyRequest, presidentialPardon};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "The intern has been working hard. ";
			Form *form = forms[i](target);
			std::cout << std::endl;
			return (form);
		}
	}
	std::cout << "The intern can't find that form. " << std::endl;
	return nullptr;
}
