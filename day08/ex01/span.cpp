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
	if (vec.size() < this->size)
	{
		vec.push_back(n);
		return ;
	}
	throw Span::SpanIsFullException();
}

int	Span::shortestSpan(void)
{
    if (vec.size() > 1)
    {
        std::sort(this->vec.begin(), this->vec.end());
        int     min = std::numeric_limits<int>::max();
        for (size_t i = 0; i < vec.size() - 1; i++)
        {
            for (size_t j = i + 1; j < vec.size(); j++)
            {
                if (vec.at(j) - vec.at(i) < min)
                    min = vec.at(j) - vec.at(i);
            }
        }
        return min;
    }
    throw Span::NoSpanFoundException();
    return 0;
}

int	Span::longestSpan(void)
{
    if (vec.size() > 1)
    {
        std::sort(this->vec.begin(), this->vec.end());
        int     max = std::numeric_limits<int>::min();
        for (size_t i = 0; i < vec.size() - 1; i++)
        {
            for (size_t j = i + 1; j < vec.size(); j++)
            {
                if (vec.at(j) - vec.at(i) > max)
                    max = vec.at(j) - vec.at(i);
            }
        }
        return max;
    }
    throw Span::NoSpanFoundException();
    return 0;
}
