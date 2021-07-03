# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

int main()
{
	Form *shrubbery = new ShrubberyCreationForm("Home");
	Form *presid = new PresidentialPardonForm("Pres");
	Form *robot = new RobotomyRequestForm("ROBOT");

	srand(time(nullptr));
	Bureaucrat exec("Executer", 5);
	Bureaucrat signer("Signer", 99);
	
	exec.executeForm(*shrubbery);
	exec.executeForm(*presid);
	exec.executeForm(*robot);

	try
	{
		signer.signForm(shrubbery);
		signer.signForm(presid);
		signer.signForm(robot);
		signer.signForm(shrubbery);
	}
	catch(const std::exception& e)
	{
		std::cerr << signer.getName() << " can't " << e.what() << '\n';
	}
	
	return 0;
}