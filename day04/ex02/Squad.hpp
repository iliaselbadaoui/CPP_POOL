#pragma once

# include <iostream>
# include <string>
# include "ISquad.hpp"
class Squad : public ISquad
{
	private:
		ISpaceMarine *squad;
	public:

		Squad();
		Squad( Squad const & src );
		~Squad();
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
		Squad &		operator=( Squad const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Squad const & i );