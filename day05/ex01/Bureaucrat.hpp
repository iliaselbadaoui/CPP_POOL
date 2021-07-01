# pragma once

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat
{
	private:
		Bureaucrat();
		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string const name;
		int		grade;
		
	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		int		getGrade() const;
		std::string const &getName() const;
		void		increment();
		void		decrement();


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

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );