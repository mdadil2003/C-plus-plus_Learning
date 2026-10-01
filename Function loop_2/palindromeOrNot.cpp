// 15.	WAP to check whether the number entered is palindrome or not.
#include <iostream>
using namespace std;

void palindrome(int n)
{
    int original = n;
    int digit, reverse = 0;

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    palindrome(num);

    return 0;
}