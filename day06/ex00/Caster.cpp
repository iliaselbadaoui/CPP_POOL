#include "Caster.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Caster::Caster(std::string const &value)
{
	if (value.empty())
		throw Caster::ValueIsEmptyException();
	this->value = value;
}

Caster::Caster( const Caster & src )
{
	this->value = src.getValue();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Caster::~Caster()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Caster &				Caster::operator=( Caster const & rhs )
{
	this->value = rhs.getValue();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Caster const & i )
{
	o << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

char	Caster::toChar()
{
	int		container = std::stoi(this->value);
	std::cout << "INEGER : " << container << std::endl;
	char	result;
	if (container >= 32 && container <= 127)
		result = (char)container;
	else
		result = -1;
	return result;
}

int		Caster::toInt()
{
	return 0;
}

float	Caster::toFloat()
{
	return 0;
}

double	Caster::toDouble()
{
	return 0;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		const &Caster::getValue() const
{
	return this->value;
}

/* ************************************************************************** */