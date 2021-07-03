#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::beSigned(Bureaucrat const &bureaucrat)
{
	Form::beSigned(bureaucrat);
}

void		RobotomyRequestForm::Action(std::string exec_name) const
{
	std::string randOut[2];

	randOut[0] = "BaqBaqBaqBaqBaqBaq! " + exec_name + " has been robotomized successfully.";
	randOut[1] = "It's a failure";
	std::cout << randOut[rand() % 2] << std::endl;
}

void		RobotomyRequestForm::execute(Bureaucrat const &excutor) const
{
	Form::execute(excutor);
	Action(excutor.getName());
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */