#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bureau("Ilias", 1);
		bureau.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}