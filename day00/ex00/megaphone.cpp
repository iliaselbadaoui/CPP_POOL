#include <iostream>


int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc == 2)
	{
		for (int i=0; argv[1][i]; i++)
		{
			std::putchar(std::toupper(argv[1][i]));
		}
		std::cout << std::endl;
	}
	return 0;
}
