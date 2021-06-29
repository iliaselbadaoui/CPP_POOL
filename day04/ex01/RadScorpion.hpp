#pragma once

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		RadScorpion( RadScorpion const & src );

	public:

		RadScorpion();
		~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );

		virtual void	takeDamage(int);

};

std::ostream &			operator<<( std::ostream & o, RadScorpion const & i );