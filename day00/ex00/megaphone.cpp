#include <iostream>


int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{

		for (int j = 1; argv[j]; j++)
		{
			for (int i=0; argv[j][i]; i++)
			{
				std::putchar(std::toupper(argv[j][i]));
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
