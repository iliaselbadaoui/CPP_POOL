#pragma once

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{
	private:

		Cure &		operator=( Cure const & rhs );

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );