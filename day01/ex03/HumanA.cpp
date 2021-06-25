#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : weapon(w)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with " << weapon.getType() << std::endl;
}

Weapon	HumanA::getWeapon(void)
{
	return weapon;
}
void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}