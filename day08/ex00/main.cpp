# include "easyfind.hpp"


int main()
{
    std::vector<int> vec;

    
    for (size_t i = 0; i < 7; i++)
    {
        vec.push_back(i+1);
    }
    
    if (easyfind(vec, 4))
        std::cout << "Found" << std::endl;
    else
        std::cout << "Not found" << std::endl;

    return 0;
}