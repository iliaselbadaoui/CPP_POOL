#include "ZombieHorde.hpp"

int	main()
{
	srand(time(0));
	ZombieHorde zom(3);

	zom.announce();
	return 0;	
}