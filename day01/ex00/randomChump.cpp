#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

int		randomRange(int min, int max)
{
	int	random;

	random = rand() % (max - min);
	return random;
}

void	randomChump(void)
{
	string names[] = {"Zoombie", "BIO", "XONE", "Zomblax", "Ultra", "Goku"};

	Zombie *z = newZombie(names[randomRange(0, 6)]);
    z->announce();
    delete z;
}