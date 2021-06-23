#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    if (argc != 2)
    {
        std::cout << "Karen-filter need exctly to take one and only one arg" << std::endl;
        return 1;
    }
    karen.complain(argv[1]);
    return 0;
}