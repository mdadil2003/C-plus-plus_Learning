// 1. Create a class Bank with a static data member interestRate. Write functions to set and display interest rate. Show that it is shared among all objects.

#include <iostream>
using namespace std;

class Bank {
    static float interestRate;

public:
    static void setInterestRate(float rate) {
        interestRate = rate;
    }

    void displayInterestRate() const {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

float Bank::interestRate = 0.0f;

int main() {
    Bank b1, b2, b3;

    Bank::setInterestRate(7.5f);

    cout << "Bank 1: ";
    b1.displayInterestRate();

    cout << "Bank 2: ";
    b2.displayInterestRate();

    cout << "Bank 3: ";
    b3.displayInterestRate();

    cout << "\nUpdating interest rate through Bank class...\n";

    Bank::setInterestRate(8.25f);

    cout << "Bank 1: ";
    b1.displayInterestRate();

    cout << "Bank 2: ";
    b2.displayInterestRate();

    cout << "Bank 3: ";
    b3.displayInterestRate();

    return 0;
}
