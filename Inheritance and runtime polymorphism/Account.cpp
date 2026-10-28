// 6.	Create a class Account with attributes accountNumber and balance. Derive two classes: SavingsAccount and CurrentAccount with their specific features.

#include <iostream>
using namespace std;

class Account
{
protected:
    int accountNumber;
    double balance;

public:
    void input()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
public:
    double interestRate = 4.0;

    void showSavings()
    {
        display();
        cout << "Interest Rate: "
             << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account
{
public:
    double overdraftLimit = 10000;

    void showCurrent()
    {
        display();
        cout << "Overdraft Limit: Rs. "
             << overdraftLimit << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    cout << "--- Savings Account ---\n";
    s.input();
    s.showSavings();

    cout << "\n--- Current Account ---\n";
    c.input();
    c.showCurrent();

    return 0;
}
