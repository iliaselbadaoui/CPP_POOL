#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureau("Ilias", 10);
	std::cout << bureau << std::endl;
	std::cout << "WITH TRY-CATCH BLOCKS PRODUCES NO EXCEPTION." << std::endl;
	try
	{
		for (int i = 0; i < 10; i++)
		{
			bureau.increment();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "WITHOUT TRY-CATCH BLOCKS PRODUCES EXCEPTION AND ABORT THE PROGRAMME AFTER THAT." << std::endl << std::endl;
	bureau.increment();
	return 0;
}