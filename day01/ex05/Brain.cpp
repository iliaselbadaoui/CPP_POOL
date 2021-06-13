#include "Brain.hpp"

Brain::Brain(int neurons, float grayMatterPercentile)
{
	this->neurons = neurons;
	this->grayMatterPercentile = grayMatterPercentile;
}

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain *Brain::identify()
{
	return this;
}