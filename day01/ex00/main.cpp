#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony	poth;
	poth.setVoice("HOOOOOOOOOOhohohoho!");
	poth.setWingsLength(1.2);
	poth.makeAVoice();
	poth.fly();
}

void ponyOnTheHeap()
{
	Pony	*poth = new Pony();
	poth->setVoice("HOOOOOOOOOOhohohoho!");
	poth->setWingsLength(1.2);
	poth->makeAVoice();
	poth->fly();
	delete poth;
}

int		main()
{
	while (1)
	{
		ponyOnTheStack();
		ponyOnTheHeap();
	}
	return (0);
}