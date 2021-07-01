#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( const std::string & name )
{
	this->name = name;
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

Character::Character( const Character & src )
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

Character::~Character()
{
	deleteMaterias(this->materia, this->count);
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
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
int		Character::getCount() const
{
	return this->count;
}
AMateria **Character::getMateria() const
{
	return this->materia;
}

std::string const & Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria* m)
{
	if (this->count <= 3 && m)
	{
		++this->count;
		this->materia[this->count] = m;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= count)
	{
		delete this->materia[idx];
		--this->count;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= count)
	{
		this->materia[idx]->use(target);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */