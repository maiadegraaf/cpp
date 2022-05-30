#include "RobotomyRequestForm.hpp"
// Constructor initializes attributes to 0 by default 
RobotomyRequestForm::RobotomyRequestForm()
	: target("Default"), Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default Robotomy Request Form created" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& rhs)
	: target(rhs.target)
{
	*this = rhs;
}
 
RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) 
	: target(newTarget), Form("RobotomyRequestForm", 72, 45)
{
	std::cout << target << " Robotomy Request Form created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << target << " Robotomy Request Form destroyed" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs )
{
	target = rhs.target;
	return *this;
}

//Getters 
std::string RobotomyRequestForm::getTarget() { return target; }
 
//Setters 
void RobotomyRequestForm::setTarget(std::string newTarget) { target = newTarget; }
 
// toString 
void RobotomyRequestForm::toString()
{
  std::cout << "target : " << target << std::endl; 
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkPermissions(executor);
	std::cout << " * some drilling noises * " << std::endl;
	if ((std::rand() % 2) == 0)
		std::cout << target << " has been succesfully robotomized." << std::endl;
	else
		std::cout << "The robotomy has failed." << std::endl;
}
 
