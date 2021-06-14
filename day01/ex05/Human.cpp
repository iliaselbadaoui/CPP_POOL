#include "Human.hpp"

Human::Human(float height, float weight, int age)
{
	this->height = height;
	this->weight = weight;
	this->age = age;
}

Human::Human()
{
}

Human::~Human()
{
}

Brain *Human::identify()
{
	return brain.identify();
}

Brain &Human::getBrain()
{
	return brain;
}