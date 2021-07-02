#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string n, int grade) : name(n)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : name(src.getName())
{
	this->grade = src.getGrade();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int		Bureaucrat::getGrade() const
{
	return this->grade;
}

std::string	const &	Bureaucrat::getName() const
{
	return this->name;
}

void	Bureaucrat::increment()
{
	--(this->grade);
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrement()
{
	++(this->grade);
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	
}

void		Bureaucrat::signForm(Form Form) const
{
	if (this->grade > Form.getGradeToExecute() || this->grade > Form.getGradeToSign())
		std::cout << this->name << " cannot sign " << Form.getName() << " because ";
	else
		std::cout << this->name << " signs " << Form.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */