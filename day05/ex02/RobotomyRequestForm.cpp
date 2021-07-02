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

void	RobotomyRequestForm::beSigned(Bureaucrat const &bureaucrat) const
{
	bureaucrat.signForm((Form *)this);
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
}

void		RobotomyRequestForm::Action(std::string exec_name)
{
	std::cout << exec_name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void		RobotomyRequestForm::execute(Bureaucrat const &excutor) const
{
	if (this->getSigned())
		throw Form::FormIsSignedException();
	else if (excutor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	beSigned(excutor);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */