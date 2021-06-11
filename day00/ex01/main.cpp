#include "Phonebook.hpp"

int		main()
{
	string	choice;
	Phonebook	pb;
	do
	{
		std::cin >> choice;
		if (choice == "ADD")
			pb.Add();
		else if (choice == "SEARCH")
			pb.Search();
		else if (choice == "EXIT")
			break; 
	} while (1);
	return 0;
}