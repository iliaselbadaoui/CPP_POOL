# pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();


		virtual void	beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const &excutor) const;
		
		void	Action(std::string  exec_name) const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );
