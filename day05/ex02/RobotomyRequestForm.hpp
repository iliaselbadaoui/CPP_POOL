#ifndef ROBOTOMYREQUESTForm_HPP
# define ROBOTOMYREQUESTForm_HPP

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

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void	beSigned(Bureaucrat const &bureaucrat) const;
		virtual void	execute(Bureaucrat const &excutor) const;
		

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTForm_H */