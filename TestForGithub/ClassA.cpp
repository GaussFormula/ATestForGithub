#include "ClassA.h"
#include <iostream>
A::A(int a)
{
	example = a;
	std::cout << "A��Ĵ��ι��캯��" << std::endl;
}
A::A()
{
	example = 0;
	std::cout << "A����޲ι��캯��" << std::endl;
}
A::~A()
{
	;
}
int A::getValue()
{
	return example;
}
