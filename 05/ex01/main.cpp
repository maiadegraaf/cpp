#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "--------------[  form level too high  ]--------------" << std::endl;
	try
	{
		Form High1("High", -1, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << std::endl;
	}
	try
	{
			Form High2("High", 23, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << std::endl;
	}
	std::cout << "--------------[  form level too low   ]--------------" << std::endl;
	try
	{
		Form Low1("Low", 600, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << std::endl;
	}
	try
	{
		Form Low2("Low", 23, 700);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << std::endl;
	}

	std::cout << "--------------[ Lets sign some forms! ]--------------" << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 75);
	Form housingPermit("Housing Permit", 5, 23), billionareElegibilityForm("Billionare Elegibility Form", 80, 3);

	Henry.signForm(housingPermit);
	Henry.signForm(billionareElegibilityForm);
	Bob.signForm(housingPermit);
	George.signForm(billionareElegibilityForm);
	Bob.signForm(billionareElegibilityForm);
	return (0) ;
}