#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

// int main()
// {
// 	while (1)
// 	{
// 		memoryLeak();
// 	}
	
// 	return 0;
// }

