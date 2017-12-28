#pragma once
#include "ClassA.h"
class B:public A
{
public:
	B(int a);
	~B();
	int getAValue();

private:
	int b_example;
};
