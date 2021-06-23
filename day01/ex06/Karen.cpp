#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

int checksum(std::string str)
{
    int sum = 0;
    for (int i = 0; i < (int)str.length(); i++)
    {
        sum += str.c_str()[i] * (i + 1);
    }
    return (sum);
}

void Karen::complain(std::string level)
{
    // std::cout << checksum(level) << std::endl;
    switch (checksum(level))
    {
    case 1099:
        std::cout << "[ "<< level << " ]" << std::endl;
        debug();
        break;
    case 755:
        std::cout << "[ "<< level << " ]" << std::endl;
        info();
        break;
    case 2105:
        std::cout << "[ "<< level << " ]" << std::endl;
        warning();
        break;
    case 1205:
        std::cout << "[ "<< level << " ]" << std::endl;
        error();
        break;
    default:
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

void    Karen::debug()
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void    Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}