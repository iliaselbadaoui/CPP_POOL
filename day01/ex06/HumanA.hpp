#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon *weapon;
	std::string	name;
public:
	HumanA();
	HumanA(std::string name, Weapon *weapon);
	HumanA(std::string name);
	~HumanA();
	void	attack();
	Weapon	getWeapon(void);
	void	setWeapon(Weapon *weapon);
};

#endif