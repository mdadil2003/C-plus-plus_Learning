#include <iostream>
using namespace std;

int main()
{
    int age;
    float ticketPrice, discount, finalPrice;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Ticket Price: ";
    cin >> ticketPrice;

    if(age < 18)
    {
        discount = ticketPrice * 20 / 100;
    }
    else
    {
        discount = 0;
    }

    finalPrice = ticketPrice - discount;

    cout << "Discount = Rs. " << discount << endl;
    cout << "Final Ticket Price = Rs. " << finalPrice;

    return 0;
}