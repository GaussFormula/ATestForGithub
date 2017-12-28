#include <iostream>
#include "ClassB.h"
using std::cout;
int main()
{
	B b = B(1);
	std::cout << b.getAValue()<<std::endl;
	system("pause");
	return 0;
}