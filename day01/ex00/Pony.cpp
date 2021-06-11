#include "Pony.hpp"

Pony::Pony()
{
}

Pony::~Pony()
{
}
string	Pony::getVoice(void)
{
	return voice;
}
string	Pony::getName(void)
{
	return name;
}
float	Pony::getWingsLength(void)
{
	return wingsLength;
}
int	Pony::getAge(void)
{
	return age;
}
void	Pony::setVoice(string value)
{
	voice = value;
}
void	Pony::setName(string value)
{
	name = value;
}
void	Pony::setWingsLength(float value)
{
	wingsLength = value;
}
void	Pony::setAge(int value)
{
	age = value;
}

void	Pony::makeAVoice(void)
{
	std::cout << voice << std::endl;
}
void	Pony::fly(void)
{
	if (wingsLength < 1.3)
		std::cout << "FLEEEEEEEEEEEEEEEEEEEEEEEW!FLEEEEEEEEEEEW!" << std::endl;
	else
		std::cout << "I CAN'T FLY, MY WINGS ARE TO SMALL :'(" << std::endl;
}