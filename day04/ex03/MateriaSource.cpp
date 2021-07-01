#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	this->materia = new AMateria*[4];
	count = -1;
}

void	deleteMaterias(AMateria **materia, int count)
{
	if (count >= 0)
	{
		for (int i = 0; i <= count; i++)
		{
			delete materia[i];
		}
		delete materia;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	AMateria	**srcMaterias;
	if (src.getCount() >= 0)	
	{
		srcMaterias = src.getMateria();

		deleteMaterias(this->materia, this->count);
		this->materia = new AMateria*[4];
		for (int i = 0; i <= src.getCount(); i++)
		{
			this->materia[i] = srcMaterias[i];
		}
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	deleteMaterias(this->materia, this->count);
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	AMateria	**rhsMaterias;
	if (rhs.getCount() >= 0)	
	{
		rhsMaterias = rhs.getMateria();

		deleteMaterias(this->materia, this->count);
		this->materia = new AMateria*[4];
		for (int i = 0; i <= rhs.getCount(); i++)
		{
			this->materia[i] = rhsMaterias[i];
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->count <= 3 && m)
	{
		++this->count;
		this->materia[this->count] = m;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->materia[i]->getType() == type && type == "ice")
			return (new Ice(*(Ice *)(this->materia[i])));
		else if (this->materia[i]->getType() == type && type == "cure")
			return (new Cure(*(Cure *)(this->materia[i])));
	}
	

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */