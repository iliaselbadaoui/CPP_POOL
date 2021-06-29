#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	this->hp = rhs.getHP();
	this->type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i )
{
	o << "Hey there I am an Enemy, and my type is " << i.getType() << ", my current HP is : " << i.getHP();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		SuperMutant::takeDamage(int damage)
{
	if (damage >= 3 && this->hp >= damage)
	{
		this->hp -= damage - 3;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */