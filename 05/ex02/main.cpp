#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << MAGENTA << "--------------[ Lets be bureaucratic ]--------------" << RESET_COLOR << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 40);

	std::cout << MAGENTA << "\n--------------[    Shrubbery Form    ]--------------" << RESET_COLOR << std::endl;
	ShrubberyCreationForm GH2("For the knights who say ni");
	std::cout << std::endl;
	George.executeForm(GH2);
	std::cout << std::endl;
	Henry.signForm(GH2);
	George.executeForm(GH2);
	std::cout << MAGENTA << "--------------[    Robotomy Form     ]--------------" << RESET_COLOR << std::endl;
	RobotomyRequestForm UH6("Boris Johnson");
	std::cout << std::endl;
	Bob.signForm(UH6);
	for (int i = 0; i < 4; i++)
	{
		std::cout << "[    TRY " << i + 1 << "     ]" << std::endl;
		George.executeForm(UH6);
	}

	std::cout << MAGENTA << "\n--------------[  Presidential Form   ]--------------" << RESET_COLOR << std::endl;
	PresidentialPardonForm AA1("Idi Amin");
	std::cout << std::endl;
	Henry.signForm(AA1);
	std::cout << std::endl;
	Bob.signForm(AA1);
	George.executeForm(AA1);
	std::cout << std::endl;
	Bob.executeForm(AA1);
	std::cout << MAGENTA << "\n--------------[      DESTRUCT       ]--------------" << RESET_COLOR << std::endl;


	return (0) ;
}