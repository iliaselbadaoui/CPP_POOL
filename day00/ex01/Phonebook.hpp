#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <vector>
class Phonebook
{
private:
	Contact book[8];
	int index;
public:
	Phonebook();
	~Phonebook();
	void Add(void);
	void Search(void);
};

#endif