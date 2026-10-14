#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    BankAccount(int accNo, string customerName, double initialBalance)
    {
        accountNumber = accNo;
        name = customerName;
        balance = initialBalance;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount customer1(101, "Adil", 10000);
    BankAccount customer2(102, "Rahul", 15000);

    customer1.display();

    cout << endl;

    customer2.display();

    return 0;
}