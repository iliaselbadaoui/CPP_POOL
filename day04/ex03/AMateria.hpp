#pragma once

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private :
	AMateria();

	protected :
		std::string type;
		unsigned int _xp;


	public :
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	AMateria &		operator=( AMateria const & rhs );

	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );