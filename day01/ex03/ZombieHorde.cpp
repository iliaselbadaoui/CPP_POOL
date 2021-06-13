#include "ZombieHorde.hpp"

int		randomRange(int min, int max)
{
	int	random;

	random = rand() % (max - min);
	return random;
}

ZombieHorde::ZombieHorde(int n)
{
	string names[] = {"Zoombie", "BIO", "XONE", "Zomblax", "Ultra", "Goku"};

	for (int i = 0; i < n; i++)
	{
		Zombie zombie(names[randomRange(0, 6)], "RANDOM");
		zombies.push_back(zombie);
	}
}

ZombieHorde::~ZombieHorde()
{
	
}

void ZombieHorde::announce()
{
	for (int i = 0; i < zombies.size(); i++)
	{
		zombies.at(i).announce();
	}
}
