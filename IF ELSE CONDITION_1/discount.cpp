#include <iostream>
using namespace std;
int main()
{
    float amount, discount, finalAmount;
    cout << "Enter Purchase Amount: ";
    cin >> amount;

    if(amount > 500)
    {
        discount = amount * 10 / 100;
    }
    else
    {
        discount = 0;
    }

    finalAmount = amount - discount;

    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount;


    return 0;
}