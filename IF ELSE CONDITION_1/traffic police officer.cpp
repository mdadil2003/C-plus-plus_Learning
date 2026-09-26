#include <iostream>
using namespace std;

int main()
{
    int speed;

    cout << "Enter Vehicle Speed: ";
    cin >> speed;

    if(speed <= 60)
    {
        cout << "Safe";
    }
    else if(speed <= 100)
    {
        cout << "Warning";
    }
    else
    {
        cout << "Fine";
    }

    return 0;
}
