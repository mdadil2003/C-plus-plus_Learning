#include <iostream>
using namespace std;

void pattern()
{
    for(int i = 1; i <= 5; i++)
    {

        for(int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for(int k = 1; k <= i; k++)
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