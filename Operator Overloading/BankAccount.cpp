// 6.	Define a class BankAccount with balance. Overload the > operator to compare two accounts by balance.


#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void input()
    {
        cout << "Enter account balance: ";
        cin >> balance;
    }

    bool operator>(BankAccount b)
    {
        return balance > b.balance;
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1, b2;

    cout << "Enter details of first account:" << endl;
    b1.input();

    cout << "\nEnter details of second account:" << endl;
    b2.input();

    cout << "\nFirst account ";
    b1.display();

    cout << "Second account ";
    b2.display();

    if(b1 > b2)
    {
        cout << "First account has a higher balance.";
    }
    else if(b2 > b1)
    {
        cout << "Second account has a higher balance.";
    }
    else
    {
        cout << "Both accounts have equal balances.";
    }

    return 0;
}
