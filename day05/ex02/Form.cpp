#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

void	gradeOutOfBound(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string const &FormName, int signeGrade, int executeGrade) : name(FormName), gradeToSign(signeGrade), gradeToExecute(executeGrade)
{
	gradeOutOfBound(signeGrade);
	gradeOutOfBound(executeGrade);
	this->_signed = false;
}

Form::Form( const Form & src ) : name(src.getName()), gradeToSign(src.getGradeToSign()), gradeToExecute(src.getGradeToExecute())
{
	this->_signed = src.getSigned();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form : " << i.getName() << std:: endl;
	o << "\t\tGRADE TO SIGN : " << i.getGradeToSign() << std::endl;
	o << "\t\tGRADE TO EXCUTE : " << i.getGradeToExecute() << std::endl;
	o << "\t\tIS SIGNED : " << ((i.getSigned()) ? "YES" : "NO") << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		const &Form::getName() const
{
	return this->name;
}

bool			Form::getSigned() const
{
	return this->_signed;
}

int				Form::getGradeToSign() const
{
	return this->gradeToSign;
}

int				Form::getGradeToExecute() const
{
	return this->gradeToExecute;
}

/* ************************************************************************** */