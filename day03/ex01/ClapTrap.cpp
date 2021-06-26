#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "The ClapTrap constructor is called" << std::endl;
    this->name = name;
    hitpoints = 10;
    energy = 10;
    damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "The ClapTrap destructor is called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "<" + this->name + ">" << "atacks <" + target + ">, causing <" << hitpoints << "> points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "<" + this->name + ">" << "got a damage of <" << amount << "> points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "<" + this->name + ">" << "energy is restored by <" << amount << "> points." << std::endl;
}