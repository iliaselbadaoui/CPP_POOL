# pragma once

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria **materia;
		int count;
		MateriaSource &		operator=( MateriaSource const & rhs );
	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		int		getCount() const;
		AMateria 	**getMateria() const;
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);



};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );