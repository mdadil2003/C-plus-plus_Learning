// 11.	WAP to print all digits of a number and their sum.

#include <iostream>
using namespace std;

void digitsAndSum(int n)
{
    int digit, sum = 0;

    cout << "Digits are: ";

    while(n > 0)
    {
        digit = n % 10;
        cout << digit << " ";

        sum = sum + digit;
        n = n / 10;
    }

    cout << "\nSum = " << sum;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    digitsAndSum(num);

    return 0;
}