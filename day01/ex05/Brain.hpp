#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>


class Brain
{
private:
	int	neurons;
	float grayMatterPercentile;
public:
	Brain(int neurons, float grayMatterPercentile);
	Brain();
	~Brain();
	Brain *identify();
};

#endif