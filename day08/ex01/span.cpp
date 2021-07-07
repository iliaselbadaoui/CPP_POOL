# include "span.hpp"

Span::Span(unsigned int N)
{
	this->size = N;
}

Span::~Span()
{

}

const char *Span::SpanIsFullException::what() const throw()
{
	return "Span is full";
}

const char *Span::NoSpanFoundException::what() const throw()
{
	return "No Span found";
}

void	Span::addNumber(int const n)
{
	if (vec.size() <= this->size)
	{
		vec.push_back(n);
		return ;
	}
	throw Span::SpanIsFullException();
}

int	Span::shortestSpan(void)
{
    std::sort(this->vec.begin(), this->vec.end());

    if (vec.size() > 1)
    {
        return ((int)vec.at(1) - (int)vec.at(0));
    }
    throw Span::NoSpanFoundException();
    return 0;
}


int	Span::longestSpan(void)
{
	std::sort(this->vec.begin(), this->vec.end());

    if (vec.size() > 1)
    {
        return ((int)vec.at(vec.size() - 1) - (int)vec.at(0));
    }
    throw Span::NoSpanFoundException();
    return 0;
}
