# include "span.hpp"


int main()
{

    std::cout << "SUBJECT'S MAIN" << std::endl;
    Span sp = Span(1000);

    srand(time(NULL));
    
    for (int i = 0; i < 1000; i++)
    {
        sp.addNumber(rand());
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "Extension : " << std::endl;

    std::vector<int> vec;

    for (size_t i = 0; i < 1000; i++)
    {
        vec.push_back(rand());
    }
    
    std::vector<int>::iterator start = vec.begin();
    std::vector<int>::iterator end = vec.end();

    Span    range(1000);

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