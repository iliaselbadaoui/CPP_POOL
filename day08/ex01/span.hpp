# pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{
	private:
		Span();
		std::vector<int>	vec;
		unsigned int		size;
		Span &		operator=( Span const & rhs );

	public:
		Span(unsigned int N);
		~Span();
		void	addNumber(int const n);
		int		longestSpan(void);
		int		shortestSpan(void);

	
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

std::ostream &			operator<<( std::ostream & o, Span const & i );