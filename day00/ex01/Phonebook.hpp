#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <vector>
class Phonebook
{
private:
	std::vector<Contact> book;
public:
	Phonebook();
	~Phonebook();
	void Add(void);
	void Search(void);
};

#endif