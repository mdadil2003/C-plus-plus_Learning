#include <iostream>
using namespace std;

void pattern2()
{
    for(char i='D'; i>='A'; i--)
    {
        for(char j='A'; j<=i; j++)
            cout<<j;

        cout<<endl;
    }
}

int main()
{
    pattern2();
}