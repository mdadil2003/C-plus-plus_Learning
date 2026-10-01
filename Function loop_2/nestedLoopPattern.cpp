#include <iostream>
using namespace std;

void pattern1()
{
    int space = 1;

    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            cout << "*";

        if(i != 5)
        {
            for(int k = 1; k <= space; k++)
                cout << " ";

            space += 2;
        }

        for(int j = 1; j <= i; j++)
        {
            if(i == 5 && j == 5)
                continue;

            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    pattern1();
}