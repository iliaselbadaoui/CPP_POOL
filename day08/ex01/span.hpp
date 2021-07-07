# pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int		size;

	public:
		Span(unsigned int N);
		~Span();
		void	addNumber(int const n);
		int		longestSpan(void);
		int		shortestSpan(void);

		template <typename T>
		void	addRange(T start, T end)
		{
			if ((unsigned int)(std::distance(start, end)) > this->size - this->vec.size())
					throw Span::SpanIsFullException();
			while (start != end)
			{
				vec.push_back(*start);
				++start;
			}
		};

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