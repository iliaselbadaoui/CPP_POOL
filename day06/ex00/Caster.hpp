# pragma once

# include <iostream>
# include <string>
# include <exception>
class Caster
{

	private:
		Caster();
		std::string value;
	public:
		Caster(std::string const &value);
		Caster( Caster const & src );
		~Caster();
		char	toChar();
		int		toInt();
		float	toFloat();
		double	toDouble();
		std::string		const &getValue() const;

		Caster &		operator=( Caster const & rhs );

		class	ValueIsEmptyException: public std::exception
		{
			public :
				const char* what() const throw()
				{
					return "Grade is to high";
				};
		};

};

std::ostream &			operator<<( std::ostream & o, Caster const & i );