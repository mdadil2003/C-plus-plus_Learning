// 13.	WAP to check whether the number is Armstrong or not.

#include <iostream>
using namespace std;

void armstrong(int n)
{
    int original = n;
    int digit, sum = 0;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    armstrong(num);

    return 0;
}