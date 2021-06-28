#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim (src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleurak..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	this->name = rhs.getName();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Peon const & i )
{
	o << "I'm " << i.getName() << " and I like otters" << std::endl;
	return o;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void	Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */