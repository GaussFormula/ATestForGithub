#include "ClassB.h"
#include <iostream>
B::B(int a)
{
	b_example = a;
	std::cout << "B��Ĵ��ι��캯��" << std::endl;
}

B::~B()
{
	;
}
int B::getAValue()
{
	return getValue();
}
