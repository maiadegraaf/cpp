#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "--------------[ Lets be bureaucratic ]--------------" << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 70);
	PresidentialPardonForm AA1("Idi Amin");
	ShrubberyCreationForm GH2("For the knights who say ni");
	RobotomyRequestForm UH6("Boris Johnson");

	std::cout << "\n--------------[    Shrubbery Form    ]--------------" << std::endl;
	Henry.signForm(GH2);
	George.signForm(GH2);
	George.executeForm(GH2);
	std::cout << "\n--------------[    Robotomy Form     ]--------------" << std::endl;
	Bob.signForm(UH6);
	George.executeForm(UH6);
	std::cout << "\n--------------[  Presidential Form   ]--------------" << std::endl;
	Henry.signForm(AA1);
	Bob.signForm(AA1);
	George.executeForm(AA1);
	Bob.executeForm(AA1);
	std::cout << "\n--------------[      DESTRUCT       ]--------------" << std::endl;


	return (0) ;
}