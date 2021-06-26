#include "ScavTrap.hpp"

int     main()
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");

    std::cout << std::endl;
    clap.attack("Yclap");
    clap.takeDamage(7);
    clap.beRepaired(4);

    std::cout << std::endl;
    scav.attack("Yscav");
    scav.takeDamage(23);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << std::endl;
    return 0;
}