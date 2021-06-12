#include "ZombieEvent.hpp"


int		main()
{
	ZombieEvent	ze;
	Zombie		*zombie;

	srand(time(0));
	ze.setZombieType("Commander");
	ze.randomChump();

	ze.setZombieType("Ruler");
	zombie = ze.newZombie("HYPER");
	zombie->announce();
	delete zombie;
	return 0;
}