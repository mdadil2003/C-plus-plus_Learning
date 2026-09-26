#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(originalNum == reverse)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }

    return 0;
}