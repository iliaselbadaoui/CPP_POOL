#include "Weapon.hpp"


Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType(void)
{
	return type;
}

void		Weapon::setType(std::string type)
{
	if (!type.empty())
		this->type = type;
}