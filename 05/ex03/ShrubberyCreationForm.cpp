#include "ShrubberyCreationForm.hpp"
// Constructor initializes attributes to 0 by default 
ShrubberyCreationForm::ShrubberyCreationForm()
	: target("Default"), Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default Shrubbery Form created" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& rhs)
	: target(rhs.target)
{
	*this = rhs;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) 
	: target(newTarget), Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << target << " Shrubbery Form created" << std::endl;	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << target << " Shrubbery Form destroyed" << std::endl;	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs )
{
	target = rhs.target;
	return *this;
}

//Getters 
std::string ShrubberyCreationForm::getTarget() { return target; }
 
//Setters 
void ShrubberyCreationForm::setTarget(std::string newTarget) { target = newTarget; }
 
// toString 
void ShrubberyCreationForm::toString()
{
  std::cout << "target : " << target << std::endl; 
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkPermissions(executor);
	std::ofstream file(target);
	for (int i = 0; i < 4; i++)
	{
		file << "                                  # #### ####" << std::endl;
		file << "                                ### \\/#|### |/####" << std::endl;
		file << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
		file << "                             ###  \\/###|/ \\/ # ###" << std::endl;
		file << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
		file << "                           __#_--###`  |{,###---###-~" << std::endl;
		file << "                                     \\ }{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      }}{" << std::endl;
		file << "                                      {{}" << std::endl;
		file << "                                , -=-~{ .-^- _" << std::endl;
		file << "                                      `}\n\n" << std::endl;
	}
		
	file.close();
}
