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

void		PresidentialPardonForm::execute(Bureaucrat const &excutor) const
{
	std::cout << excutor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */