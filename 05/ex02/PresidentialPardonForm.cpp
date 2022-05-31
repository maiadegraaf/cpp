#include "PresidentialPardonForm.hpp"
// Constructor initializes attributes to 0 by default 
PresidentialPardonForm::PresidentialPardonForm()
	: target("Default"), Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default Presidential Pardon Form created" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& rhs)
	: target(rhs.target)
{
	*this = rhs;
}
 
PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) 
	: target(newTarget), Form("PresidentialPardonForm", 25, 5)

{
	std::cout << target << " Presidential Pardon Form created" << std::endl;	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << target << " Presidential Pardon Form destroyed" << std::endl;	
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs )
{
	target = rhs.target;
	return *this;
}

//Getters 
std::string PresidentialPardonForm::getTarget() { return target; }
 
//Setters 
void PresidentialPardonForm::setTarget(std::string newTarget) { target = newTarget; }
 
// toString 
void PresidentialPardonForm::toString()
{
  std::cout << "target : " << target << std::endl; 
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkPermissions(executor);
	std::cout << BLUE << target << " has been pardoned by Zephod Beeblebrox" << RESET_COLOR << std::endl;
}
 
