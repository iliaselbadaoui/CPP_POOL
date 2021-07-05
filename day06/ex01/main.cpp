#include <iostream>

struct Data
{
	std::string login;
	std::string pass;
};

uintptr_t	serialize(Data *ptr)
{
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data *>(raw);
}

int		main()
{
	Data initial;
	uintptr_t ptr;
	Data *back;

	initial.login = "ielbadao";
	initial.pass = "ilias";

	ptr = serialize(&initial);
	back = deserialize(ptr);

	std::cout << &initial << std::endl;
	std::cout << back << std::endl;

	return 0;

}