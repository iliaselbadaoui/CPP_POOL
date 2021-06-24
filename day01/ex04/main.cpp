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
	std::ifstream f(argv[1]);
	std::string content;
	std::string line;
	std::string fname = std::string(argv[1]) + std::string(".replace");
	std::ofstream r(fname);

	if (argc != 4)
	{
		std::cout << "the programe must take three args <FILENAME> <STRING> <SUBSTITUTE>" << std::endl;
		return 1;
	}
	content = "";
	while (std::getline(f, line))
	{
		line = replace(line, std::string(argv[2]), std::string(argv[3]));
		content += line;
		content.push_back('\n');
	}
	r << content;
	return 0;
}