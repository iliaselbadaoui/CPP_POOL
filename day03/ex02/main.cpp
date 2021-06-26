#include "ScavTrap.hpp"

int     main()
{
    ClapTrap clap("XClap");
    ScavTrap scav("XSCav");

    clap.attack("Yclap");
    clap.takeDamage(7);
    clap.beRepaired(4);

    scav.attack("Yscav");
    scav.takeDamage(7);
    scav.beRepaired(4);
    scav.guardGate();
    return 0;
}