//  14.	Use iterators to traverse a vector and display elements.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Vector elements: ";

    for (vector<int>::iterator it = numbers.begin();
         it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}
