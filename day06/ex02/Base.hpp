#pragma once
#include <stack>
#include <iostream>
class Base : public std::stack<int>
{
	public:
		virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base	*generate(void);