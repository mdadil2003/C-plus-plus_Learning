#include <iostream>
using namespace std;

int main()
{
    float balance, amount;

    cout << "Enter Account Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if(amount <= balance)
    {
        cout << "Transaction Successful";
    }
    else
    {
        cout << "Insufficient Balance";
    }
    return 0;
}