#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::Zombie(string name, string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
}

void	Zombie::setType(string value)
{
	type = value;
}

void	Zombie::announce()
{
	cout << "<" << name << " (" << type << ")>" << " Have a BIG BIIIIIIIIG BRAIN" << std::endl;
}