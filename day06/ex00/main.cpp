# include "Caster.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "caster need one and only arg" << std::endl;
		return 1;
	}
	Caster	c(argv[1]);

	std::cout << "String value : " << c << std::endl;
	if (c.toChar() != -1)
		std::cout << "To char : " << c.toChar() << std::endl;
	else
		std::cout << "To char : impossible" << std::endl;
	// std::cout << "To int : " << c.toInt() << std::endl;
	// std::cout << "To float : " << c.toFloat() << std::endl;
	// std::cout << "To double : " << c.toFloat() << std::endl;

	return 0;
}