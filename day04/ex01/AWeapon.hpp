#pragma once

# include <iostream>
# include <string>

class AWeapon
{
	private:
		AWeapon();

	protected:
		std::string name;
		int	apcost, damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		std::string const &getName() const;
		int getAPCost() const;
		int getDamage() const;

		virtual void attack() const = 0;

		AWeapon &		operator=( AWeapon const & rhs );

};

std::ostream &			operator<<( std::ostream & o, AWeapon const & i );