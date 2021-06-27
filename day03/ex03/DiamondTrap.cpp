#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string thisName, std::string name) : ClapTrap(name + "_clap_name") ,FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
    std::cout << "The DiamondTrap constructor is called" << std::endl;
    this->name = thisName;
    ClapTrap::name = name;
    hitpoints = 100;
    energy = 100;
    damage = 50;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is : " << this->name << ", and my parent's name is : " << ClapTrap::name << std::endl;
}