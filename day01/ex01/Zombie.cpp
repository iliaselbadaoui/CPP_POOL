#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	cout << "The zombie '" << name << "' is destructed" << std::endl;
}


void	Zombie::announce()
{
	cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}