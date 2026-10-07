// 7. Input an array of integers and sort them in ascending order.

#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];

    cout << "Enter 10 integers:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    sortArray(arr, 10);

    cout << "Array in ascending order:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
