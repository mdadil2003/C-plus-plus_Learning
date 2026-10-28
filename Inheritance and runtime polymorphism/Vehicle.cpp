// 2.	Define a class Vehicle with attributes brand and price. Derive a class Car that adds model and mileage. Display car details using single inheritance.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string brand;
    double price;
};

class Car : public Vehicle
{
public:
    string model;
    double mileage;

    void input()
    {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter model: ";
        cin >> model;

        cout << "Enter mileage: ";
        cin >> mileage;
    }

    void display()
    {
        cout << "\n--- Car Details ---\n";
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
    }
};

int main()
{
    Car c;

    c.input();
    c.display();

    return 0;
}
