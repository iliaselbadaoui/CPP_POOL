#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{	}

Ice::Ice( const Ice & src ) : AMateria(src)
{	}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* Shoots an ice bolt at " << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */