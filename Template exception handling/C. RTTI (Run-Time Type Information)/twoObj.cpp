// 20.	Demonstrate a program where typeid is used to compare types of two objects.

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    double c = 10.5;

    if (typeid(a) == typeid(b))
        cout << "a and b have the same type." << endl;
    else
        cout << "a and b have different types." << endl;

    if (typeid(a) == typeid(c))
        cout << "a and c have the same type." << endl;
    else
        cout << "a and c have different types." << endl;

    return 0;
}
