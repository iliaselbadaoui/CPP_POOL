#include "Zombie.hpp"

Zombie	*ZombieHorde(int n, string name)
{
	Zombie	*zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		Zombie zombie(name + std::to_string(i + 1), "RANDOM");
		zombies[i] = zombie;
	}
	return zombies;
}
