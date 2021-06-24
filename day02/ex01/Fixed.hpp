#pragma once 
# include <iostream>

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
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fix);
