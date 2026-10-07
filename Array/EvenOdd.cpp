// 5. Store 20 numbers in an array and count how many are even and odd.

#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n)
{
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
}

int main()
{
    int arr[20];

    cout << "Enter 20 numbers:" << endl;

    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    countEvenOdd(arr, 20);

    return 0;
}
