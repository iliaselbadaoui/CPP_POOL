# include "Base.hpp"
# include <cmath>

Base	*generate(void)
{
	int index = rand() % 3;

	if (index == 0)
		return new A();
	else if (index == 1)
		return new B();
	return new C();
}
void identify(Base* p)
{
	A *a;
	B *b;
	C *c;
	
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
	else
		std::cout << "Undefined type";
}
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &a = dynamic_cast<B &>(p);
			(void) a;
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &a = dynamic_cast<C &>(p);
				(void) a;
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Undefined type";
			}
			
		}
	}
}
int main()
{
	srand(time(NULL));
	Base *x;

	x = generate();
	identify(x);
	identify(*x);
	return 0;
}