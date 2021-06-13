# include <iostream>
# include <string>

int	main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "POINTER : (" << *ptr << ")" << std::endl;
	std::cout << "REFERENCE : (" << ref << ")" << std::endl;

	return 0;
}