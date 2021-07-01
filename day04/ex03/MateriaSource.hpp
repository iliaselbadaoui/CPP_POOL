# pragma once

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria **materia;
		int count;
	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		int		getCount() const;
		AMateria 	**getMateria() const;
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

		MateriaSource &		operator=( MateriaSource const & rhs );


};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );