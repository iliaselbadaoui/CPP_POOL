# pragma once
# include <exception>
# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
int   easyfind(T container, int toFind)
{
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
        return *it;
    throw std::exception();
}