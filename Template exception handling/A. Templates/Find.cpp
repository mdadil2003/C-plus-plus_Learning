// 16.	Demonstrate use of find() to locate an element in a list.

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    auto it = find(numbers.begin(), numbers.end(), key);

    if (it != numbers.end())
        cout << "Element found: " << *it;
    else
        cout << "Element not found";

    return 0;
}

