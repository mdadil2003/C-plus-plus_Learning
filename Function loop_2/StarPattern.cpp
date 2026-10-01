#include <iostream>
using namespace std;

void pattern()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    pattern();
    return 0;
}