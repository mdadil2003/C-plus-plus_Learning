#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    double price;

public:

    void input()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Array of 5 Car objects
    Car cars[5];

    // Input details of 5 cars
    for(int i = 0; i < 5; i++)
    {
        cout << "\n===== Car " << i + 1 << " =====" << endl;

        cars[i].input();
    }

    // Display details of 5 cars
    cout << "\n\n===== ALL CAR DETAILS =====" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n--- Car " << i + 1 << " ---" << endl;

        cars[i].display();
    }

    return 0;
}