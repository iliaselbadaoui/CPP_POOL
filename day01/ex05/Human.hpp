#ifndef HUMAN_HPP
# include "Brain.hpp"

class Human
{
private:
	Brain brain;
	float height;
	float weight;
	int age;
public:
	Human(float height, float weight, int age);
	Human();
	~Human();
	Brain *identify();
	Brain &getBrain();
};

#endif