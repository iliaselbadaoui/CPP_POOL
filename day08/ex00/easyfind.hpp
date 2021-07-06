# pragma once
# include <exception>
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
bool   easyfind(T container, int toFind)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        if (container[i] == toFind)
            return true;
    }
    return false;
}