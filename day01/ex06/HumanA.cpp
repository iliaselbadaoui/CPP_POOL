#include "HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::HumanA(std::string name)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attack's with " << weapon->getType() << std::endl;
}

Weapon	HumanA::getWeapon(void)
{
	return *weapon;
}
void	HumanA::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}