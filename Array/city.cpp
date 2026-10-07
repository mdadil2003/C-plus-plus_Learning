// 3. Create a program to store the names of 5 cities in an array and display them in reverse order.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cities[5];
    cout << "Enter 5 city names:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> cities[i];
    }
    cout << "Cities in reverse order:" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << cities[i] << endl;
    }
    return 0;
}
