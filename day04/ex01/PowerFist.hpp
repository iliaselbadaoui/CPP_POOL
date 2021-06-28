#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>

class PowerFist
{
	private:
		PowerFist( PowerFist const & src );

	public:

		PowerFist();
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );


};

std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ******************************************************* POWERFIST_H */