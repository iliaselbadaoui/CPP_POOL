# include "Caster.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "caster need one and only arg" << std::endl;
		return 1;
	}

	Caster	c(argv[1]);

	std::cout << "To char : ";
	c.toChar();
	std::cout << std::endl;

	std::cout << "To int : ";
	c.toInt();
	std::cout << std::endl;
	
	std::cout << "To float : ";
	c.toFloat();
	std::cout << std::endl;
	
	std::cout << "To double : ";
	c.toDouble();
	std::cout << std::endl;

	return 0;
}