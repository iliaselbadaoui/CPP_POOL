#pragma once

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{

	private:
		SuperMutant( SuperMutant const & src );

	public:

		SuperMutant();
		~SuperMutant();

		SuperMutant &		operator=( SuperMutant const & rhs );

		virtual void		takeDamage(int);
};

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i );