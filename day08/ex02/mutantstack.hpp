# pragma once

# include <algorithm>
# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{

    public:
        MutantStack();
        MutantStack(const MutantStack & obj);
		void 						operator = (const MutantStack & obj);
        ~MutantStack();

        typedef     typename std::stack<T>::container_type::iterator    iterator;
        typedef     typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        iterator    begin();
        iterator    end();
        reverse_iterator    rbegin();
        reverse_iterator    rend();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
typename  MutantStack<T>::iterator    MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename  MutantStack<T>::reverse_iterator    MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator    MutantStack<T>::rend()
{
    return this->c.rend();
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & obj) : std::stack<T>(obj)
{
    *this = obj;
}

template <typename T>
void 				MutantStack<T>::operator = (const MutantStack & obj)
{
    this->c = obj.c;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}