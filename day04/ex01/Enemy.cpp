#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
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

 Enemy &				 Enemy::operator=(Enemy const & rhs)
{
	this->hp = rhs.getHP();
	this->type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o,  Enemy const & i )
{
	o << "Hey there I am just an Enemy " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Enemy::takeDamage(int damage)
{
	if (damage > 0 && this->hp >= damage)
	{
		this->hp -= damage;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &Enemy::getType() const
{
	return this->type;
}

int	Enemy::getHP() const
{
	return this->hp;
}

/* ************************************************************************** */