#ifndef ROBOTOMYREQUESTForm_HPP
# define ROBOTOMYREQUESTForm_HPP

# include <iostream>
# include <string>

class RobotomyRequestForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTForm_H */