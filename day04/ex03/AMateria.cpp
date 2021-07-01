#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	this->_xp = 0;
}

AMateria::AMateria( const AMateria & src )
{
	this->type = src.getType();
	this->_xp = src.getXP();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria	&AMateria::operator=( AMateria const & rhs )
{
	this->_xp = rhs.getXP();
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType() const
{
	return (this->type);
}
unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */