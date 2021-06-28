#include "Sorcerer.hpp"
#include "Victim.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
	this->name = "ROBERT_Default";
	this->title = "the default Magnificent";
	std::cout << this->name << ", " <<  this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " <<  this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	this->name = src.getName();
	this->title = src.getTitle();
	std::cout << this->name << ", " <<  this->title << ", is born!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " <<  this->title << ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	this->name = rhs.getName();
	this->title = rhs.getTitle();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Sorcerer::getName(void) const
{
	return this->name;
}

std::string		Sorcerer::getTitle(void) const
{
	return this->title;
}


/* ************************************************************************** */