# include "span.hpp"


int main()
{

    std::cout << "SUBJECT'S MAIN" << std::endl;
    Span sp = Span(10000);

    srand(time(NULL));
    
    for (int i = 0; i < 10000; i++)
    {
        sp.addNumber(rand());
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "Extension : " << std::endl;

    std::vector<int> vec;

    vec.push_back(4);
    vec.push_back(-5);
    vec.push_back(121);
    vec.push_back(42);
    vec.push_back(0);
    vec.push_back(5000);
    vec.push_back(4999);
    vec.push_back(-5000);
    vec.push_back(11);

    std::vector<int>::iterator start = vec.begin();
    std::vector<int>::iterator end = vec.end();

    Span    range(10000);

    range.addRange(start, end);

    std::cout << range.shortestSpan() << std::endl;
    std::cout << range.longestSpan() << std::endl;

    try
    {
        range.addNumber(1998);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return 0;
}