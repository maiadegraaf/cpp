#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "--------------[ Lets be bureaucratic ]--------------" << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 40);

	std::cout << "\n--------------[    Shrubbery Form    ]--------------" << std::endl;
	ShrubberyCreationForm GH2("For the knights who say ni");
	Henry.signForm(GH2);
	George.signForm(GH2);
	George.executeForm(GH2);
	std::cout << "\n--------------[    Robotomy Form     ]--------------" << std::endl;
	RobotomyRequestForm UH6("Boris Johnson");
	Bob.signForm(UH6);
	George.executeForm(UH6);
	RobotomyRequestForm UH7("Boris Johnson");
	Bob.signForm(UH7);
	George.executeForm(UH7);
	RobotomyRequestForm UH8("Boris Johnson");
	Bob.signForm(UH8);
	George.executeForm(UH8);
	RobotomyRequestForm UH9("Boris Johnson");
	Bob.signForm(UH9);
	George.executeForm(UH9);
	std::cout << "\n--------------[  Presidential Form   ]--------------" << std::endl;
	PresidentialPardonForm AA1("Idi Amin");
	Henry.signForm(AA1);
	Bob.signForm(AA1);
	George.executeForm(AA1);
	Bob.executeForm(AA1);
	std::cout << "\n--------------[      DESTRUCT       ]--------------" << std::endl;


	return (0) ;
}