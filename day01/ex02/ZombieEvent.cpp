# include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(string name)
{
	if (!type.empty())
		return new Zombie(name, type);
	else
		return NULL;
}

int		randomRange(int min, int max)
{
	int	random;

	random = rand() % (max - min);
	return random;
}

void	ZombieEvent::randomChump(void)
{
	string names[] = {"Zoombie", "BIO", "XONE", "Zomblax", "UltraOne"};

	if (!type.empty())
	{
		Zombie *z = newZombie(names[randomRange(0, 5)]);
		z->announce();
		delete z;
	}
}