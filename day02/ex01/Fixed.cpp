#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed = 0;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(int n)
{
    std::cout << "Int constructor called" << std::endl;
    fixed = n << fraction;
}
Fixed::Fixed(float n)
{
    std::cout << "Float constructor called" << std::endl;
    fixed = std::roundf(n * (1 << fraction));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed = obj.getRawBits();
    return *this;
}


std::ostream &operator<<(std::ostream &os, Fixed const &fix)
{
    os << fix.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
    fixed = raw;
}

int		Fixed::toInt(void) const
{
    return fixed >> fraction;
}
float	Fixed::toFloat(void) const
{
    return  (float)fixed / (1 << fraction);
}