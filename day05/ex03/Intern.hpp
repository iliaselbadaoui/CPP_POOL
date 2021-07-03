# pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Intern( Intern const & src );
		Intern &		operator=( Intern const & rhs );

	public:

		Intern();
		~Intern();

		Form	*madeForm(std::string type, std::string target);

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );