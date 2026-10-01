// 1.	WAP to print reverse of a number.

#include <iostream>
using namespace std;

void reverseNumber(int n)
{
    int digit, reverse = 0;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << "Reverse Number = " << reverse;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    reverseNumber(num);

    return 0;
}