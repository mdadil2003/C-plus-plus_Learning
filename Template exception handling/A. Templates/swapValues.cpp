// 1.	Write a function template swapValues() that swaps two variables of any type. Test it with int, float, and string.

#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "Integers: " << x << " " << y << endl;

    float a = 1.5f, b = 2.5f;
    swapValues(a, b);
    cout << "Floats: " << a << " " << b << endl;

    string s1 = "Hello", s2 = "Adil";
    swapValues(s1, s2);
    cout << "Strings: " << s1 << " " << s2 << endl;

    return 0;
}