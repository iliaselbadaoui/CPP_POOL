#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string	name;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void	attack();
	Weapon	getWeapon(void);
	void	setWeapon(Weapon &weapon);
};

#endif