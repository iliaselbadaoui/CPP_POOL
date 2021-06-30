#pragma once

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	private:
		AssaultTerminator( AssaultTerminator const & src );
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

	public:

		AssaultTerminator();
		~AssaultTerminator();


		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;


};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );