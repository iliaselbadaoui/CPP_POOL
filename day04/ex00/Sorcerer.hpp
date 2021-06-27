#pragma once

# include <iostream>
# include <string>

class Sorcerer
{
	private:
		std::string name, title;

	public:

		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );
