# include <iostream>
# include <string>

int	main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str<<std::endl;
	std::cout << stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;


	std::cout << "POINTER : (" << *stringPTR << ")" << std::endl;
	std::cout << "REFERENCE : (" << stringREF << ")" << std::endl;

	return 0;
}