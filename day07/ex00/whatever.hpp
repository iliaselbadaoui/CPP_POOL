#pragma once

template <class Type>
void    swap(Type &a, Type &b)
{
    Type aux;
    aux = a;
    a = b;
    b = aux;
}

template <class Type>
Type   max(Type left, Type right)
{
    if (left > right)
        return left;
    return right;
}

template <class Type>
Type   min(Type left, Type right)
{
    if (left < right)
        return left;
    return right;
}