#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <vector>

class ZombieHorde
{
private:
	std::vector<Zombie> zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};

#endif