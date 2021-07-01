#pragma once

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		Character();
		AMateria **materia;
		int count;
		std::string name;
	public:
		Character( const std::string & name );
		Character( Character const & src );
		~Character();

		int		getCount() const;
		AMateria **getMateria() const;
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Character const & i );