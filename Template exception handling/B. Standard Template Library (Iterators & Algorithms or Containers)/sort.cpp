// 15.	Write a program to sort a vector of integers using sort() algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }

    sort(numbers.begin(), numbers.end());
    
    cout << "Sorted vector: ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}
