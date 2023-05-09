#include "MyVector.h"
#include <iostream>

double print(double& my)
{
	std::cout << my <<" ";
    return my;
}

int main()
{
    MyVector<double> arr;

    arr.addElement(5.5);
    arr.addElement(5.7);

    arr.print();
    arr.apply(print);
}
