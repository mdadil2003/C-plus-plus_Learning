// 10.	WAP to check whether a number is prime or not.

#include <iostream>
using namespace std;

void prime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    prime(num);

    return 0;
}