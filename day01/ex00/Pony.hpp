#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# define string std::string

class Pony
{
private:
	string	voice;
	string	name;
	float	wingsLength;
	int		age;
public:
	Pony();
	~Pony();

	//GETTERS
	string	getVoice(void);
	string	getName(void);
	float	getWingsLength(void);
	int		getAge(void);

	// SETTERS
	void	setVoice(string value);
	void	setName(string value);
	void	setWingsLength(float value);
	void	setAge(int value);

	//METHODS
	void	makeAVoice(void);
	void	fly(void);
};

#endif