#pragma once
#include <iostream>
class ClapTrap
{
private:
    std::string  name;
    int hitpoints, energy, damage;
public:
    ClapTrap();
    ~ClapTrap();
    std::string   getName(void) const;
    int     getHitpoints(void) const;
    int     getEnergy(void) const;
    int     getDamage(void) const;
    void    setName(std::string  value);
    void    setHitpoints(int value);
    void    setEnergy(int value);
    void    setDamage(int value);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap(/* args */)
{
}

ClapTrap::~ClapTrap()
{
}
