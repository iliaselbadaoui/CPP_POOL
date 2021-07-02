#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat target) : Form(target.getName(), 145, 137)
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

void		ShrubberyCreationForm::Action()
{
	std::ofstream target_file(this->getName() + "_shrubbery");
	asciiTree(target_file);
	target_file.close();
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */