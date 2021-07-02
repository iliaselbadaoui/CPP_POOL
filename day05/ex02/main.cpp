# include "Bureaucrat.hpp"
# include "Form.hpp"
int main()
{
	try
	{
		Form form("CrazyForm", 7, 3);
		Bureaucrat bureaucrat("Square", 4);

		try
		{
			form.beSigned(bureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}