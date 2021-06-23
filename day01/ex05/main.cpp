# include "Karen.hpp"

int main()
{
    Karen karen;

    void (Karen::* complainPtr)(std::string) =  &Karen::complain;
    (karen.*complainPtr)("DEBUG");
    (karen.*complainPtr)("INFO");
    (karen.*complainPtr)("WARNING");
    (karen.*complainPtr)("ERROR");
    return 0;
}