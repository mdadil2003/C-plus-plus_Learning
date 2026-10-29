//  7.	Write a program using vector to store and display integers.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int n, value;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Vector elements: ";

    for (int x : numbers)
        cout << x << " ";

    cout << "\nSize: " << numbers.size();

    return 0;
}
