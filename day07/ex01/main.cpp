# include "iter.hpp"

void    print(std::string &str)
{
    std::cout << str << std::endl;
}



int     main()
{
    std::string arr[] = {"ilias", "square", "HELLO"};

    iter(arr, 3, &print);
    return 0;
}