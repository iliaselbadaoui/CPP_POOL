# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main()
{
	Intern	intern;
	Form *shrubbery = intern.madeForm("shrubbery create", "Home");
	Form *presid = intern.madeForm("presidential pardon", "Pres");
	Form *robot = intern.madeForm("robotomy request", "ROBOT");
	Form *rub = intern.madeForm("rubber shoe", "rub");


	srand(time(nullptr));
	Bureaucrat exec("Executer", 5);
	Bureaucrat signer("Signer", 99);
	
	if (rub == nullptr)
		std::cout << "rub is nullptr" << std::endl;
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