#pragma once 
# include <iostream>
# define epsilon .00390625f
class Fixed
{
private:
	int					fixed;
	const static int	fraction = 8;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed(int n);
	Fixed(float n);
	~Fixed();
	Fixed	&operator=(const Fixed &obj);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt(void) const;
	float	toFloat(void) const;
	static Fixed	&max(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator<<(std::ostream &os, Fixed const &fix);
bool	operator>(const Fixed &left, const Fixed &right);
bool	operator<(const Fixed &left, const Fixed &right);
bool	operator>=(const Fixed &left, const Fixed &right);
bool	operator<=(const Fixed &left, const Fixed &right);
bool	operator==(const Fixed &left, const Fixed &right);
bool	operator!=(const Fixed &left, const Fixed &right);
Fixed	operator+(const Fixed &left, const Fixed &right);
Fixed	operator-(const Fixed &left, const Fixed &right);
Fixed	operator*(const Fixed &left, const Fixed &right);
Fixed	operator/(const Fixed &left, const Fixed &right);