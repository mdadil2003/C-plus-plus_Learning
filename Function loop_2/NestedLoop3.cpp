#include <iostream>
using namespace std;

void pattern4()
{
    int space = 1;

    for(char i='E'; i>='A'; i--)
    {
        for(char j='A'; j<=i; j++)
            cout<<j;

        if(i!='E')
        {
            for(int k=1;k<=space;k++)
                cout<<" ";

            space += 2;
        }

        for(char j=i; j>='A'; j--)
        {
            if(i=='E' && j=='E')
                continue;

            cout<<j;
        }

        cout<<endl;
    }
}

int main()
{
    pattern4();
}