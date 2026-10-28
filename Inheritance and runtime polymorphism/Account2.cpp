// 9.	Create a base class Account with a virtual function withdraw(). Derive classes SavingsAccount and CurrentAccount and override the withdraw() function with specific rules.


#include <iostream>
using namespace std;

class Account
{
protected:
    double balance;

public:
    Account(double b)
    {
        balance = b;
    }

    virtual void withdraw(double amount)
    {
        cout << "Withdrawal rule not defined." << endl;
    }

    virtual ~Account() = default;

    void displayBalance()
    {
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(double b) : Account(b) {}

    void withdraw(double amount) override
    {
        if(amount > 0 && balance - amount >= 1000)
        {
            balance -= amount;
            cout << "Savings withdrawal successful." << endl;
        }
        else
        {
            cout << "Withdrawal denied: minimum balance is Rs. 1000."
                 << endl;
        }
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(double b) : Account(b) {}

    void withdraw(double amount) override
    {
        if(amount > 0 && balance - amount >= -5000)
        {
            balance -= amount;
            cout << "Current account withdrawal successful." << endl;
        }
        else
        {
            cout << "Withdrawal denied: overdraft limit exceeded."
                 << endl;
        }
    }
};

int main()
{
    SavingsAccount s(10000);
    CurrentAccount c(2000);

    Account* ptr;

    double amount;

    cout << "Savings account balance: ";
    s.displayBalance();

    cout << "Enter savings withdrawal amount: ";
    cin >> amount;

    ptr = &s;
    ptr->withdraw(amount);
    s.displayBalance();

    cout << "\nCurrent account balance: ";
    c.displayBalance();

    cout << "Enter current account withdrawal amount: ";
    cin >> amount;

    ptr = &c;
    ptr->withdraw(amount);
    c.displayBalance();

    return 0;
}
