#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

Form	*Intern::madeForm(std::string type, std::string target)
{
	std::string		types[] = {"shrubbery create",
								"presidential pardon",
								"robotomy request"};

	int i = 0;

	while (types[i] != type && i < 3)
		i++;
	

	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << target << std::endl;
		return new ShrubberyCreationForm(target);
		break;
	case 1:
		std::cout << "Intern creates " << target << std::endl;
		return new PresidentialPardonForm(target);
		break;
	case 2:
		std::cout << "Intern creates " << target << std::endl;
		return new RobotomyRequestForm(target);
		break;
	
	default:
		std::cout << "Unknown type of form [ " << type << " ]" << std::endl;
		return nullptr;
		break;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */