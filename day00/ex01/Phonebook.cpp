#include "Phonebook.hpp"


Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}
Contact		read_contact()
{
	Contact	c;
	string	value;
	std::cout << "What's your first name : ";
	std::cin >> value;
	c.setFname(value);
	std::cout << "What's your last name : ";
	std::cin >> value;
	c.setLname(value);
	std::cout << "What's your nickname : ";
	std::cin >> value;
	c.setNname(value);
	std::cout << "What's your login : ";
	std::cin >> value;
	c.setLogin(value);
	std::cout << "What's your address : ";
	std::cin >> value;
	c.setAddress(value);
	std::cout << "What's your email : ";
	std::cin >> value;
	c.setEmail(value);
	std::cout << "What's your birthday : ";
	std::cin >> value;
	c.setBirth(value);
	std::cout << "What's your phone : ";
	std::cin >> value;
	c.setPhone(value);
	std::cout << "What's your favorite meal : ";
	std::cin >> value;
	c.setMeal(value);
	std::cout << "What's your underwear color : ";
	std::cin >> value;
	c.setUnderwear(value);
	std::cout << "What's your darkest secret : ";
	std::cin >> value;
	c.setSecret(value);

	return c;
}
void Phonebook::Add(void)
{
	if (book.size() <= 7)
	{
		book.push_back(read_contact());
	}
	else
	{
		book.erase(book.begin());
		book.push_back(read_contact());
	}
}

void	printSpaces(string	index)
{
	std::size_t len = index.length();
	for (size_t i = 0; i < 10 - len; i++)
	{
		std::cout << " ";
	}
	std::cout << "|";
}

void	exactPrint(string str)
{
	std::ios init(NULL);
    init.copyfmt(std::cout);
	if (str.length() <= 10)
	{
		std::cout << str;
		for (size_t i = 0; i < 10 - str.length(); i++)
		{
			std::cout << " ";
		}
		std::cout << "|";
	}
	else
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".|";
	}
	std::cout.copyfmt(init);
}

void	printContact(int index, Contact c)
{
	std::cout << (index + 1) ;
	printSpaces(std::to_string(index));
	exactPrint(c.getFname());
	exactPrint(c.getLname());
	exactPrint(c.getNname());
}

void	printWanted(int i, std::vector<Contact> &book)
{
	Contact	wanted = book.at((std::size_t)(i - 1));
	std::cout << "First Name : " << wanted.getFname() << std::endl;
	std::cout << "Last Name : " << wanted.getLname() << std::endl;
	std::cout << "Nickname : " << wanted.getNname() << std::endl;
	std::cout << "Email : " << wanted.getEmail() << std::endl;
	std::cout << "Address : " << wanted.getAddress() << std::endl;
	std::cout << "Phone : " << wanted.getPhone() << std::endl;
	std::cout << "Favorite meal : " << wanted.getMeal() << std::endl;
	std::cout << "Login : " << wanted.getLogin() << std::endl;
	std::cout << "Birthday : " << wanted.getBirth() << std::endl;
	std::cout << "Underwear color: " << wanted.getUnderwear() << std::endl;
	std::cout << "Darkest secret : " << wanted.getSecret() << std::endl;
}

void Phonebook::Search(void)
{
	string	str;
	int		i;
	std::cout << "index     |first name|last name |nickname  |" << std::endl;
	for (size_t i = 0; i < book.size(); i++)
	{
		printContact(i, book[i]);
		std::cout << std::endl;
	}
	std::cout << "Give the index of the element you're looking for : ";
	std::cin >> str;
	i = std::stoi(str);
	if (!i || (std::size_t)i > book.size() + 1)
	{
		std::cout << "the index must be a number and between 1 and 8";
		return ;
	}
	printWanted(i, book);
}