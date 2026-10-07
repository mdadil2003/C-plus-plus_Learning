// 8. Write a program to merge two arrays into a third array.

#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int c[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }
}

int main()
{
    int a[5], b[5], c[10];

    cout << "Enter 5 elements for first array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter 5 elements for second array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }

    mergeArrays(a, b, c, 5, 5);

    cout << "Merged array:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}

