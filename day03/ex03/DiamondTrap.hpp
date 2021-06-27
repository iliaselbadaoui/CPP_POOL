#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    // std::string name;
public:
    DiamondTrap(std::string thisName, std::string name);
    ~DiamondTrap();
    void whoAmI();
};