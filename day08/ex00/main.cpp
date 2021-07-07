# include "easyfind.hpp"


int main()
{
    std::vector<int> vec;

    
    for (size_t i = 0; i < 7; i++)
    {
        vec.push_back(i+1);
    }
    
    std::cout << "Found : " << easyfind(vec, 4) << std::endl;

    try
    {
        easyfind(vec, 9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return 0;
}