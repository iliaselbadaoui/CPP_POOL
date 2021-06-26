#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "The ScavTrap constructor is called" << std::endl;
    hitpoints = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "The ScavTrap destructor is called" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "<" + name + ">" << "have enterred in Gate keeper mode" << std::endl;
}