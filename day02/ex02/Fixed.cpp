#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    fixed = 0;
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

Fixed::Fixed(int n)
{
    fixed = n * (1 << fraction);
}
Fixed::Fixed(float n)
{
    fixed = std::roundf(n * (1 << fraction));
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1 > f2)
        return (Fixed &)f1;
    else
        return (Fixed &)f2;
}

int Fixed::getRawBits( void ) const
{
    return fixed;
}
void Fixed::setRawBits( int const raw )
{
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


//-----------------------------OPERATORS-----------------------------

Fixed	&Fixed::operator=(const Fixed &obj)
{
    this->fixed = obj.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fix)
{
    os << fix.toFloat();
    return os;
}

bool	operator>(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() > right.getRawBits());
}

bool	operator<(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() < right.getRawBits());
}

bool	operator>=(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() >= right.getRawBits());
}

bool	operator<=(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() <= right.getRawBits());
}

bool	operator==(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() == right.getRawBits());
}

bool	operator!=(const Fixed &left, const Fixed &right)
{
    return (left.getRawBits() != right.getRawBits());
}

Fixed	operator+(const Fixed &left, const Fixed &right)
{
    Fixed result;
    Fixed f(left.toFloat() + right.toFloat());
    result.setRawBits(f.getRawBits());
    return result;
}

Fixed	operator-(const Fixed &left, const Fixed &right)
{
    Fixed result;
    Fixed f(left.toFloat() - right.toFloat());
    result.setRawBits(f.getRawBits());
    return result;
}

Fixed	operator*(const Fixed &left, const Fixed &right)
{
    Fixed result;
    Fixed f(left.toFloat() * right.toFloat());
    result.setRawBits(f.getRawBits());
    return result;
}

Fixed	operator/(const Fixed &left, const Fixed &right)
{
    Fixed result;
    Fixed f(left.toFloat() / right.toFloat());
    result.setRawBits(f.getRawBits());
    return result;
}

Fixed	Fixed::operator++()
{
    this->fixed = (this->toFloat() + epsilon) * (1 << fraction);
    return *this;
}
Fixed	Fixed::operator++(int)
{
    Fixed reslut;
    reslut.setRawBits(fixed);
    this->fixed = (this->toFloat() + epsilon) * (1 << fraction);
    return reslut;
}
Fixed	Fixed::operator--()
{
    this->fixed = (this->toFloat() - epsilon) * (1 << fraction);
    return *this;
}
Fixed	Fixed::operator--(int)
{
    Fixed reslut;
    reslut.setRawBits(fixed);
    this->fixed = (this->toFloat() - epsilon) * (1 << fraction);
    return reslut;
}