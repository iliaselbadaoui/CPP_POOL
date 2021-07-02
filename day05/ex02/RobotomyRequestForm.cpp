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
	if (bureaucrat.getGrade() > this->getGradeToSign() || bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
}

void		RobotomyRequestForm::execute(Bureaucrat const &excutor) const
{
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */