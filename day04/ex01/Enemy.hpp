#pragma once

# include <iostream>
# include <string>

class  Enemy
{
	private:
		Enemy();
		Enemy(Enemy const & src );
	protected :
		std::string type;
		int hp;

	public:

		Enemy(int hp, std::string const & type);
		virtual ~Enemy();

		Enemy &operator=(Enemy const & rhs);

		std::string const &getType() const;
		int getHP() const;

		virtual void	takeDamage(int);

};

std::ostream &			operator<<( std::ostream & o,  Enemy const & i );