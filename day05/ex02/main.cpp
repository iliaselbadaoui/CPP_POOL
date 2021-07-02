# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
int main()
{
	try
	{
		Form Form("CrazyForm", 7, 3);
		Bureaucrat bureaucrat("Square", 4);
	
		try
		{
			Form.beSigned(bureaucrat);
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