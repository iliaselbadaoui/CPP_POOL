#pragma once

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		PlasmaRifle( PlasmaRifle const & src );

	public:
		PlasmaRifle();
		~PlasmaRifle();

		virtual void attack() const = 0;

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );


};

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );