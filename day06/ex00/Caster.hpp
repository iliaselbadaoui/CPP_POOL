# pragma once

# include <iostream>
# include <string>
# include <exception>
# include <limits>
# include <iomanip>
class Caster
{

	private:
		Caster();
		std::string value;
	public:
		Caster(std::string const &value);
		Caster( Caster const & src );
		~Caster();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
		std::string		const &getValue() const;

		Caster &		operator=( Caster const & rhs );

		class	ValueIsEmptyException: public std::exception
		{
			public :
				const char* what() const throw();
		};

};

std::ostream &			operator<<( std::ostream & o, Caster const & i );