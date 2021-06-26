#pragma once
#include <iostream>
class ClapTrap
{
protected:
    std::string  name;
    int hitpoints, energy, damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string   getName(void) const;
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
