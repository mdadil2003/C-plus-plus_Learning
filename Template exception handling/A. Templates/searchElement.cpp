// 4.	Create a function template searchElement() that searches for an element in an array of any data type.

#include <iostream>
#include <string>
using namespace std;

template <typename T>
int searchElement(T arr[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = searchElement(arr, 5, key);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}