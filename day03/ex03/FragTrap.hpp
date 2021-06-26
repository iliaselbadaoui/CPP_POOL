#pragma once
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
};
