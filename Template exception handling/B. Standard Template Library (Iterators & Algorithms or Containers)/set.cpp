// 10.	Create a program using set to store unique numbers entered by the user.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> numbers;
    int n, value;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> value;
        numbers.insert(value);
    }

    cout << "Unique sorted numbers: ";

    for (int x : numbers)
        cout << x << " ";

    cout << "\nUnique count: " << numbers.size();

    return 0;
}