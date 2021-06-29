#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}
Character::Character(std::string const & name)
{
	this->name = name;
	this->AP = 40;
	this->weapon = nullptr;
}

Character::Character( const Character & src )
{
	this->name = src.getName();
	this->AP = 40;
	this->weapon = src.getWeapon();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->name = rhs.getName();
	this->AP = getAP();
	this->weapon = rhs.getWeapon();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon() != nullptr)
		o << i.getName() << " has " << i.getAP() << " and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " and is unarmed" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::recoverAP()
{
	this->AP += 10;
}
void Character::equip(AWeapon* weapon)
{
	if (weapon->getAPCost() <= this->AP)
	{
		this->AP -= weapon->getAPCost();
		this->weapon = weapon;
	}
	
}
void Character::attack(Enemy* enemy)
{
	if (enemy->getHP() >= this->getWeapon()->getDamage())
	{
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		enemy->takeDamage(this->getWeapon()->getDamage());
		weapon->attack();
	}
	else
		delete enemy;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	&Character::getName() const
{
	return this->name;
}

int			Character::getAP() const
{
	return this->AP;
}

AWeapon		 *Character::getWeapon() const
{
	return (this->weapon);
}

/* ************************************************************************** */