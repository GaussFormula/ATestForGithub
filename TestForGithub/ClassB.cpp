#include "ClassB.h"
#include <iostream>
B::B(int a)
{
	b_example = a;
	std::cout << "B类的带参构造函数" << std::endl;
}

B::~B()
{
	;
}
int B::getAValue()
{
	return getValue();
}
