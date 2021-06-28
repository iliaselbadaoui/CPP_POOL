#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just appeard!" << std::endl;
}

Victim::Victim( const Victim & src )
{
	this->name = src.getName();
	std::cout << "Some random victim called " << this->name << " just appeard!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victime " << this->name << " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	this->name = rhs.getName();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Victim::getName(void) const
{
	return this->name;
}

/* ************************************************************************** */;