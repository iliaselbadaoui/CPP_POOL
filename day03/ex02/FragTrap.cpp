#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "The FragTrap constructor is called" << std::endl;
    hitpoints = 100;
    energy = 100;
    damage = 50;
}

FragTrap::~FragTrap()
{
    std::cout << "The FragTrap destructor is called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "I request the highest of fives" << std::endl;
}
