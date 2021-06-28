#pragma once

# include <iostream>
# include <string>
# include "Victim.hpp"
class Sorcerer
{
	private:
		std::string name, title;
		Sorcerer();

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		std::string		getName(void) const;
		std::string		getTitle(void) const;

		void polymorph(Victim const &) const;

		Sorcerer &		operator=( Sorcerer const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );
