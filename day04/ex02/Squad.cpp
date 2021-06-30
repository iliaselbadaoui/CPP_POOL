#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	this->squad = nullptr;
	this->count = -1;
}

void	deleteSquad(ISpaceMarine **squad, int count)
{
	for (int i = 0; i <= count; i++)
	{
		delete squad[i];
	}
	delete squad;
}

Squad::Squad( const Squad & src )
{
	if (src.getCount() >= 0)
	{
		deleteSquad(this->squad, this->count);
		this->squad = new ISpaceMarine*[src.getCount()];
		for (int i = 0; i < src.getCount(); i++)
		{
			squad[i] = src.squad[i]->clone();
		}
		this->count = src.getCount();
	}
	else
	{
		this->squad = nullptr;
		this->count = -1;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	deleteSquad(this->squad, this->count);
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	if (rhs.getCount() > 0)
	{
		deleteSquad(this->squad, this->count);
		this->squad = new ISpaceMarine*[rhs.getCount()];
		for (int i = 0; i < rhs.getCount(); i++)
		{
			squad[i] = rhs.squad[i]->clone();
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Squad const & i )
{
	o << "HI! this is a squade in which thee count is : " << i.getCount() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount() const
{
	return this->count;
}
ISpaceMarine* Squad::getUnit(int index) const
{
	if (index > count)
		return nullptr;
	else
	{
		return this->squad[index];
	}
}
int Squad::push(ISpaceMarine* marine)
{
	if (this->count < 0)
	{
		this->squad = new ISpaceMarine*[1];
		this->squad[0] = marine;
		++(this->count);
	}
	else
	{
		ISpaceMarine **tmp = this->squad;
		++this->count;
		this->squad = new ISpaceMarine*[this->getCount() + 1];
		for (int i = 0; i <= this->count; i++)
		{
			this->squad[i] = tmp[i];
		}
		this->squad[count] = marine;
		delete []tmp;
	}
	return count;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */