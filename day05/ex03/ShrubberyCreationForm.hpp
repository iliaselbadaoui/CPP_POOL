# pragma once

# include <iostream>
#include <fstream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm();

	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		virtual void	beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const &excutor) const;

		void	Action(std::string  exec_name) const;
		
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );


};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );