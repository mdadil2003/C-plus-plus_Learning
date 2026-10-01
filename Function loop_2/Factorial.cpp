// 9.	WAP to calculate factorial of a number.

#include <iostream>
using namespace std;

void factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial = " << fact;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    factorial(num);

    return 0;
}