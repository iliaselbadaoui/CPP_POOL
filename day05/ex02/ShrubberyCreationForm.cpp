#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

void	asciiTree(std::ofstream &file)
{
	file <<"                                              ." << std::endl;
	file <<"                                   .         ;" << std::endl;
	file <<"      .              .              ;%     ;;" << std::endl;
	file <<"        ,           ,                :;%  %;" << std::endl;
	file <<"         :         ;                   :;%;'     .," << std::endl;
	file <<",.        %;     %;            ;        %;'    ,;" << std::endl;
	file <<"  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file <<"   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	file <<"    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file <<"     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file <<"      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file <<"         `:%;.  :;bd%;          %;@%;'" << std::endl;
	file <<"           `@%:.  :;%.         ;@@%;'" << std::endl;
	file <<"             `@%.  `;@%.      ;@@%;" << std::endl;
	file <<"               `@%%. `@%%    ;@@%;" << std::endl;
	file <<"                 ;@%. :@%%  %@@%;" << std::endl;
	file <<"                   %@bd%%%bd%%:;" << std::endl;
	file <<"                     #@%%%%%:;;" << std::endl;
	file <<"                     %@@%%%::;" << std::endl;
	file <<"                     %@@@%(o);  . '" << std::endl;
	file <<"                     %@@@o%;:(.,'" << std::endl;
	file <<"                 `.. %@@@o%::;" << std::endl;
	file <<"                    `)@@@o%::;" << std::endl;
	file <<"                     %@@(o)::;" << std::endl;
	file <<"                    .%@@@@%::;" << std::endl;
	file <<"                    ;%@@@@%::;." << std::endl;
	file <<"                   ;%@@@@%%:;;;." << std::endl;
	file <<"               ...;%@@@@@%%:;;;;,.." << std::endl;
}

void		ShrubberyCreationForm::execute(Bureaucrat const &excutor) const
{
	std::ofstream target_file(excutor.getName() + "_shrubbery");
	asciiTree(target_file);
	target_file.close();
}

void	ShrubberyCreationForm::beSigned(Bureaucrat const &bureaucrat) const
{
	bureaucrat.signForm((Form *)this);
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */