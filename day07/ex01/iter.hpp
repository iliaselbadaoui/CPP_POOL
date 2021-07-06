# pragma once
# include <iostream>

template <class Type>
void    iter(Type *arr, size_t len, void (*func)(Type &element))
{
    for (size_t i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}
