#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int	fixed;
	const static int fraction;
public:
	Fixed();
	Fixed(Fixed const &fixed);
	~Fixed();
	Fixed	&operator=(const Fixed &obj);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif