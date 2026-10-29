// 2.	Create a function template findMax() that returns the maximum of three values.

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b, T c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Maximum = " << findMax(a, b, c);

    return 0;
}