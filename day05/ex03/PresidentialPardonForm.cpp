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
void	PresidentialPardonForm::beSigned(Bureaucrat const &bureaucrat)
{
	Form::beSigned(bureaucrat);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::Action(std::string exec_name) const
{
	std::cout << exec_name << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void		PresidentialPardonForm::execute(Bureaucrat const &excutor) const
{
	Form::execute(excutor);
	Action(excutor.getName());
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */