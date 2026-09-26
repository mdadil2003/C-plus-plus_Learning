#include <iostream>
using namespace std;

int main()
{
    float balance;

    cout << "Enter Account Balance: ";
    cin >> balance;

    if(balance < 1000)
    {
        cout << "Low Balance Warning";
    }
    else if(balance < 5000)
    {
        cout << "Normal Balance";
    }
    else
    {
        cout << "High Balance";
    }

    return 0;
}