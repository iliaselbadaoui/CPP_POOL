#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const & type)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

 Enemy::~ Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

 Enemy &				 Enemy::operator=(  Enemy const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o,  Enemy const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */