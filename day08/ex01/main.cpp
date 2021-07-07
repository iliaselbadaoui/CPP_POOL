# include "span.hpp"


int main()
{
    Span sp = Span(1000);

    srand(time(NULL));
    
    for (int i = 0; i < 1000; i++)
    {
        sp.addNumber(rand());
    }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}