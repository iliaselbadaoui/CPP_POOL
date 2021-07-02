# pragma once

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form();
		Form &		operator=( Form const & rhs );
		const std::string		name;
		const int				gradeToSign;
		const int				gradeToExecute;
		bool					_signed;

	public:
		Form(std::string const &name, int signeGrade, int executeGrade);
		Form( Form const & src );
		virtual ~Form();

		// ACCESSORS
		std::string		const &getName() const;
		bool			getSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;

		// MEMBER FUNCTIONS
		virtual void	beSigned(Bureaucrat bureaucrat) const = 0;

	class GradeTooHighException : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "Grade is to high";
			};
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "Grade is to low";
			};
	};
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
