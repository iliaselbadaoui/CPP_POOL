# pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:

		PresidentialPardonForm(Bureaucrat target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		void	Action();

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );