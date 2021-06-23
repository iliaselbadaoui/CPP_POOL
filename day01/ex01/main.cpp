#include "Zombie.hpp"

int	main()
{
	srand(time(0));
	Zombie *zombies = ZombieHorde(4, "AUTO_ZOMBIE");
	
	for (size_t i = 0; i < 4; i++)
	{
		zombies[i].announce();
	}
	delete zombies;
	return 0;	
}