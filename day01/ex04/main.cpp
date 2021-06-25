#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string str, std::string substitute)
{
	size_t	pos;
	std::string remain;
	std::string res = "";
	do
	{
		pos = line.find(str);
		if (pos != std::string::npos)
		{
			remain = line.substr(pos + str.length());
			line = line.substr(0, pos);
			res += line + substitute;
			line = remain;
		}
	} while (pos != std::string::npos);
	res +=  remain;
	
	return res;
}

int	main(int argc, char **argv)
{
	std::ifstream input(argv[1]);
	std::string content;
	std::string line;
	std::string fname = std::string(argv[1]) + std::string(".replace");
	int		empty = 1;
	int		match = 0;

	if (input.fail())
	{
		std::cout << "NO SUCH FILE '"<< argv[1] << "'" << std::endl;
		return 1;
	}
	if (argc != 4)
	{
		std::cout << "the programe must take three args <FILENAME> <STRING> <SUBSTITUTE>" << std::endl;
		return 1;
	}
	content = "";
	while (std::getline(input, line))
	{
		if (empty)
			empty = 0;
		if (line.find(argv[2]) != std::string::npos)
		{
			match = 1;
		}
		line = replace(line, std::string(argv[2]), std::string(argv[3]));
		content += line;
		content.push_back('\n');
	}
	if (!match && !empty)
	{
		std::cout << "NO MUCH FOUND!" << std::endl;
		return 1;
	}
	if (empty)
	{
		std::cout << "EMPTY FILE!" << std::endl;
		return 1;
	}
	std::ofstream output(fname);
	output << content;
	return 0;
}