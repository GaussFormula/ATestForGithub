#include "ClassA.h"
#include <iostream>
A::A(int a)
{
	example = a;
	std::cout << "A类的带参构造函数" << std::endl;
}
A::A()
{
	example = 0;
	std::cout << "A类的无参构造函数" << std::endl;
}
A::~A()
{
	;
}
int A::getValue()
{
	return example;
}
