#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

char firstChar(std::string str)
{
    return str.c_str()[0];
}

void Karen::complain(std::string level)
{
    void (Karen::* debugPTR)(void) = &Karen::debug;
    void (Karen::* warningPTR)(void) = &Karen::warning;
    void (Karen::* infoPTR)(void) = &Karen::info;
    void (Karen::* errorPTR)(void) = &Karen::error;
    switch (firstChar(level))
    {
    case 'D':
        (this->*debugPTR)();
        break;
    case 'I':
        (this->*infoPTR)();
        break;
    case 'W':
        (this->*warningPTR)();
        break;
    case 'E':
        (this->*errorPTR)();
        break;
    default:
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