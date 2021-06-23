#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# define string std::string
# define cout std::cout
class Zombie
{
private:
	string name, type;
public:
	Zombie();
	~Zombie();
	Zombie(string name, string type);
	void	setType(string value);
	void	announce();
};

void	randomChump(void);
Zombie	*newZombie(string name);
#endif