# pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		virtual void	beSigned(Bureaucrat const &bureaucrat) const;
		virtual void	execute(Bureaucrat const &excutor) const;
		

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );