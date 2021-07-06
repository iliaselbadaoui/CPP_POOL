# pragma once

# include <iostream>
# include <vector>

class span
{
	private:
		std::vector<int>	vec;
		unsigned int		size;
	public:
		span(unsigned int N);
		~span();
		void	addNumber(int const n);
		int		longestSpan(void) const;
		int		shortestSpan(void) const;

	
	class SpanIsFullException : public std::exception
	{
		public :
			const char *what() const throw();
	};
	class NoSpanFoundException : public std::exception
	{
		public :
			const char *what() const throw();
	};
};

const char *span::SpanIsFullException::what() const throw()
{
	return "Span is full";
}

const char *span::NoSpanFoundException::what() const throw()
{
	return "No span found";
}

void	span::addNumber(int const n)
{
	if (vec.size() >= this->size)
	{
		vec.push_back(n);
		return ;
	}
	throw SpanIsFullException();
}

int	span::shortestSpan(void) const
{
	//fill
}

span::span(unsigned int N)
{
	size = N;
}

span::~span()
{

}
