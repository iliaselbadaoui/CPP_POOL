#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	this->squad = nullptr;
	this->count = -1;
}

Squad::Squad( const Squad & src )
{
	if (src.getCount() >= 0)
	{
		delete [] *this->squad;
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
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	if (rhs.getCount() > 0)
	{
		delete [] *this->squad;
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
		delete [] *(this->squad);
		++this->count;
		this->squad = new ISpaceMarine*[this->getCount()];
		for (int i = 0; i < this->getCount() - 1; i++)
		{
			this->squad[i] = this->squad[i]->clone();
		}
		this->squad[count - 1] = marine;
	}
	return count;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */