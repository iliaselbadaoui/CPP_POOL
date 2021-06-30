#pragma once

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	private:
		TacticalMarine &		operator=( TacticalMarine const & rhs );
		TacticalMarine( TacticalMarine const & src );

	public:

		TacticalMarine();
		~TacticalMarine();


		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;


};

std::ostream &			operator<<( std::ostream & o, TacticalMarine const & i );