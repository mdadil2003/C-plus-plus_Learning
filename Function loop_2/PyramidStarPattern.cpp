#include <iostream>
using namespace std;

void pyramid()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    pyramid();
    return 0;
}