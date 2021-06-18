#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int	fixed;
	const static int fraction = 8;
public:
	Fixed();
	Fixed(Fixed &fixed);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}


#endif