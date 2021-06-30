#pragma once

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

	private:

};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );