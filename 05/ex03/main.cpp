#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "--------------[ Create Intern ]--------------" << std::endl;
	Intern	nameless;
	Form	*one, *two, *three, *four;

	std::cout << "--------------[ Create Shrubbery Form ]--------------" << std::endl;
	one = nameless.makeForm("shrubbery creation", "far far away");

	std::cout << "--------------[ Create Robotomy Form ]--------------" << std::endl;
	one = nameless.makeForm("robotomy request", "Chris");

	std::cout << "--------------[ Create Presidential Form ]--------------" << std::endl;
	one = nameless.makeForm("presidential pardon", "Mobutu");

	std::cout << "--------------[ Create Fake Form ]--------------" << std::endl;
	one = nameless.makeForm("forgery", "John Doe");
	return (0) ;
}