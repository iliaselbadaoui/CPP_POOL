#pragma once

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	private:
		Peon();

	public:
		Peon(std::string name);
		Peon( Peon const & src );
		~Peon();

		virtual void getPolymorphed() const;
		Peon &		operator=( Peon const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Peon const & i );