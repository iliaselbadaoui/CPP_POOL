#pragma once
# include <iostream>
# include <string>

class Victim
{
	private:

		Victim();

	protected:

		std::string name;

	public:

		Victim(std::string name);
		Victim( Victim const & src );
		virtual ~Victim();

		std::string		getName(void) const;

		virtual void getPolymorphed() const;

		Victim &		operator=( Victim const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Victim const & i );
