#pragma once

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria
{
	private:
		Ice &		operator=( Ice const & rhs );

	public:
		Ice();
		Ice( Ice const & src );
		~Ice();

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);



};

std::ostream &			operator<<( std::ostream & o, Ice const & i );