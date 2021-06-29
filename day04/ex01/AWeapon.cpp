#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	this->name = rhs.getName();
	this->apcost = rhs.getAPCost();
	this->damage = rhs.getDamage();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	o << "I am a " << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	const &AWeapon::getName(void) const
{
	return this->name;
}

int			AWeapon::getDamage(void) const
{
	return this->damage;
}

int			AWeapon::getAPCost(void) const
{
	return this->apcost;
}

/* ************************************************************************** */