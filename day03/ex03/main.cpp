#include "DiamondTrap.hpp"

int     main()
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    FragTrap frag("Frag");
    DiamondTrap diam("Diam", "DiamClap");

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
    frag.attack("Yfrag");
    frag.takeDamage(23);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << std::endl;
    diam.attack("Ydiam");
    diam.takeDamage(23);
    diam.beRepaired(20);
    diam.whoAmI();
    std::cout << std::endl;
    return 0;
}