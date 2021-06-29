#pragma once

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character
{
	private:
		std::string name;
		int AP;
		AWeapon *weapon;
	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		std::string const	&getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		Character &		operator=( Character const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Character const & i );