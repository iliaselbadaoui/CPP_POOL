# include "mutantstack.hpp"

int main()
{
    std::cout << "SUBJECT'S MAIN" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Main's iterator test" << std::endl;
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);



    std::cout << "MY EXTENSION REV_ITER" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    // ++rit;
    // --rit;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    return 0;
}