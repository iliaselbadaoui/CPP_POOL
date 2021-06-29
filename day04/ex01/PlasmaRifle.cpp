#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	this->name = rhs.getName();
	this->apcost = rhs.getAPCost();
	this->damage = rhs.getDamage();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i )
{
	o << "I am a " << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */