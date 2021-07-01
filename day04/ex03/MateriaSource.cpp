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

MateriaSource::MateriaSource( const MateriaSource & src )
{
	AMateria	**srcMaterias;
	if (src.getCount() >= 0)	
	{
		srcMaterias = src.getMateria();

		AMateria::deleteMaterias(this->materia, this->count);
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
	AMateria::deleteMaterias(this->materia, this->count);
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

		AMateria::deleteMaterias(this->materia, this->count);
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
	if (this->count <= 3)
	{
		++this->count;
		this->materia[this->count] = m;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type != "cure" && type != "ice")
		return (0);
	for (int i = 0; i <= this->count; i++)
	{
		if (this->materia[i]->getType() == "ice" && type == "ice")
		{
			return (new Ice(*((Ice *)(this->materia[i]))));
		}
		if (this->materia[i]->getType() == "cure" && type == "cure")
		{
			return (new Cure(*((Cure *)(this->materia[i]))));
		}
	}
	return 0;
}

int		MateriaSource::getCount() const
{
	return this->count;
}
AMateria 	**MateriaSource::getMateria() const
{
	return this->materia;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */