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
const char* Caster::ValueIsEmptyException::what() const throw()
{
	return "Empty string";
};

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

void	Caster::toChar()
{
	double		container;
		
	try
	{
		container = std::stod(this->value);

		if (container <= std::numeric_limits<char>::max() && container >= std::numeric_limits<char>::min())
		{
			if (container >= 32 && container <= 127)
				std::cout << "'" << static_cast<char> (container) << "'";
			else
				std::cout << "Non displayable";
		}
		else
			std::cout << "impossible";
	}
	catch(const std::exception& e)
	{
		if (value[0] >= 32 && value[0] <= 127 && value.length() == 1)
			std::cout << "'" << static_cast<char>((this->value[0])) << "'";
		else
			std::cout << "impossible";
		// std::cerr << e.what() << '\n';
	}
}

void	Caster::toInt()
{
	double		container;
		
	try
	{
		container = std::stod(this->value);

		if (container <= std::numeric_limits<int>::max() && container >= std::numeric_limits<int>::min())
		{
			std::cout << static_cast<int> (container);
		}
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		if (value[0] >= 32 && value[0] <= 127 && value.length() == 1)
		{
			std::cout << static_cast<int>((this->value[0]));
		}
		else
		{
			std::cout << "impossible" ;
		}
	}
}

void	Caster::toFloat()
{
	float		container;
	
	if (!value.compare("nan") || !value.compare("+inf") || !value.compare("-inf") ||!value.compare("nanf") || !value.compare("+inff") || !value.compare("-inff"))
	{
		std::cout << value ;
		if (!value.compare("nan") || !value.compare("+inf") || !value.compare("-inf"))
			std::cout << "f";
		return ;
	}
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	try
	{
		container = std::stof(this->value);
		std::cout << static_cast<float> (container);
		std::cout << "f";
	}
	catch(const std::exception& e)
	{
		if (value[0] >= -127 && value[0] <= 127 && value.length() == 1)
		{
			container = static_cast<float>((this->value[0]));
			std::cout << container << "f";
		}
		else
		{
			std::cout << "impossible";
		}
	}
}

void	Caster::toDouble()
{
	double		container;
	
	if (!value.compare("nan") || !value.compare("+inf") || !value.compare("-inf") ||!value.compare("nanf") || !value.compare("+inff") || !value.compare("-inff"))
	{
		std::cout << value ;
		if (!value.compare("nan") || !value.compare("+inf") || !value.compare("-inf"))
		return ;
	}
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	try
	{
		container = static_cast<double> (std::stod(this->value));
		std::cout << container;
	}
	catch(const std::exception& e)
	{
		if (value[0] >= -127 && value[0] <= 127 && value.length() == 1)
		{
			container = static_cast<double>((this->value[0]));
			std::cout << container;
		}
		else
		{
			std::cout << "impossible";
		}
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		const &Caster::getValue() const
{
	return this->value;
}

/* ************************************************************************** */