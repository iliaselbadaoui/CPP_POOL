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
    switch (firstChar(level))
    {
    case 'D':
        debug();
        break;
    case 'I':
        info();
        break;
    case 'W':
        warning();
        break;
    case 'E':
        error();
        break;
    default:
        break;
    }
}