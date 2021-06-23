#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << name << " attack's with " << weapon->getType() << std::endl;
}

Weapon	HumanB::getWeapon(void)
{
	return *weapon;
}
void	HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}