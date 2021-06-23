#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
class ZombieEvent
{
private:
	string type;
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(string type);
	Zombie	*newZombie(string name);
	void	randomChump(void);
};

#endif