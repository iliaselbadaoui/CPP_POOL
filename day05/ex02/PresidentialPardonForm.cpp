#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}


PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
void	PresidentialPardonForm::beSigned(Bureaucrat const &bureaucrat) const
{
	bureaucrat.signForm((Form *)this);
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::Action(std::string exec_name)
{
	std::cout << exec_name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void		PresidentialPardonForm::execute(Bureaucrat const &excutor) const
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