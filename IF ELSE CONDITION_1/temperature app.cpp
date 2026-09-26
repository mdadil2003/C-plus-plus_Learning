#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter Temperature: ";
    cin >> temp;

    if(temp < 0)
    {
        cout << "Freezing";
    }
    else if(temp <= 15)
    {
        cout << "Cold";
    }
    else if(temp <= 30)
    {
        cout << "Moderate";
    }
    else
    {
        cout << "Hot";
    }

    return 0;
}