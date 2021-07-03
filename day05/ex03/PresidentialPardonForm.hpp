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


		virtual void	beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const &excutor) const;
		void	Action(std::string  exec_name) const;
		
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );