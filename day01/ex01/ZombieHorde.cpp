#include "Zombie.hpp"

Zombie	*ZombieHorde(int n, string name)
{
	Zombie	*zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombies[i] = Zombie(name);
	}
	return zombies;
}
