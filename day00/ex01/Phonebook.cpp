#include "Phonebook.hpp"


Phonebook::Phonebook()
{
	index = -1;
}

Phonebook::~Phonebook()
{
}
Contact		read_contact()
{
	Contact	c;
	string	value;
	std::cout << "What's your first name : ";
	std::getline(std::cin, value);
	c.setFname(value);
	std::cout << "What's your last name : ";
	std::getline(std::cin, value);
	c.setLname(value);
	std::cout << "What's your nickname : ";
	std::getline(std::cin, value);
	c.setNname(value);
	std::cout << "What's your login : ";
	std::getline(std::cin, value);
	c.setLogin(value);
	std::cout << "What's your address : ";
	std::getline(std::cin, value);
	c.setAddress(value);
	std::cout << "What's your email : ";
	std::getline(std::cin, value);
	c.setEmail(value);
	std::cout << "What's your birthday : ";
	std::getline(std::cin, value);
	c.setBirth(value);
	std::cout << "What's your phone : ";
	std::getline(std::cin, value);
	c.setPhone(value);
	std::cout << "What's your favorite meal : ";
	std::getline(std::cin, value);
	c.setMeal(value);
	std::cout << "What's your underwear color : ";
	std::getline(std::cin, value);
	c.setUnderwear(value);
	std::cout << "What's your darkest secret : ";
	std::getline(std::cin, value);
	c.setSecret(value);

	return c;
}
void Phonebook::Add(void)
{
	if (index < 7)
	{
		book[++index] = read_contact();
	}
	else
	{
		std::cout << "The phonebook is full already, you can't add more contacts" << std::endl;
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

void	printWanted(Contact book)
{
	std::cout << "First Name : " << book.getFname() << std::endl;
	std::cout << "Last Name : " << book.getLname() << std::endl;
	std::cout << "Nickname : " << book.getNname() << std::endl;
	std::cout << "Email : " << book.getEmail() << std::endl;
	std::cout << "Address : " << book.getAddress() << std::endl;
	std::cout << "Phone : " << book.getPhone() << std::endl;
	std::cout << "Favorite meal : " << book.getMeal() << std::endl;
	std::cout << "Login : " << book.getLogin() << std::endl;
	std::cout << "Birthday : " << book.getBirth() << std::endl;
	std::cout << "Underwear color: " << book.getUnderwear() << std::endl;
	std::cout << "Darkest secret : " << book.getSecret() << std::endl;
}

bool	isStrNumber(const char *c)
{

	while (*c)
	{
		if (*c > '9' || *c < '0')
			return false;
		c++;
	}
	return true;
}

void Phonebook::Search(void)
{
	string	str;
	int		i;
	if (index < 0)
	{
		std::cout << "There is no contacts in the phonebook for the moment." << std::endl;
		return ;
	}
	std::cout << std::setw(10);
	std::cout << "index     |first name|last name |nickname  |" << std::endl;
	for (i = 0; i <= index; i++)
	{
		printContact(i, book[i]);
		std::cout << std::endl;
	}
	std::cout << "Give the index of the element you're looking for : ";
	std::getline(std::cin, str);
	if (!isStrNumber(str.c_str()))
	{
		std::cout << "The index '" << str << "' is not a number." << std::endl;
		return ;	
	}
	i = std::atoi(str.c_str());
	if (i >= 1 && i <= 8 && i > index + 1)
	{
		std::cout << "There is no cotact at index '" << i << "' ." << std::endl;
		return ;
	}	
	if (i > index + 1 || i <= 0)
	{
		std::cout << "Out of range, the index must be between 1 && 8" << std::endl;
		return ;
	}
	printWanted(book[i-1]);
}