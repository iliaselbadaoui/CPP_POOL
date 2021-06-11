#include "ZombieEvent.hpp"


int		main()
{
	ZombieEvent	z;

	srand(time(0));
	z.setZombieType("Commander");
	z.randomChump();

	z.setZombieType("Ruler");
	z.randomChump();
	return 0;
}