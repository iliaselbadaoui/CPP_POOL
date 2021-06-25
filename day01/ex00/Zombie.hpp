#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# define string std::string
# define cout std::cout
class Zombie
{
private:
	string name;
public:
	Zombie();
	~Zombie();
	Zombie(string name);
	void	announce();
};

void	randomChump(string name);
Zombie	*newZombie(string name);
#endif