# pragma once
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		PowerFist( PowerFist const & src );

	public:

		PowerFist();
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

		virtual void attack() const;

};

std::ostream &			operator<<( std::ostream & o, PowerFist const & i );