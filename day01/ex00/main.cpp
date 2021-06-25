#include "Zombie.hpp"


int		main()
{
	string	names[] = {"Zoombie", "BIO", "XONE", "Zomblax", "Ultra", "Goku"};
	Zombie	*newZomb;
	while (1)
	{
		for (int i = 0; i < 6; i++)
		{
			randomChump("randomChump ("+names[i]+")");
			newZomb = newZombie("newZomie (" + names[(i)]+")");
			delete newZomb;
		}

	}
	return 0;
}