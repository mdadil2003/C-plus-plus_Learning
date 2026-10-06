// 2.    Create a structure Car with company, model, and price. Input details of cars and display all cars with price < 5 lakh.

#include <iostream>
using namespace std;

struct Car {
    string company;
    string model;
    double price;
};

void input(Car &c) {
    cout << "Enter company: ";
    cin >> c.company;

    cout << "Enter model: ";
    cin >> c.model;

    cout << "Enter price: ";
    cin >> c.price;
}

void display(Car c) {
    cout << "Company: " << c.company << endl;
    cout << "Model: " << c.model << endl;
    cout << "Price: " << c.price << endl;
}

int main() {
    int n;

    cout << "Enter number of cars: ";
    cin >> n;

    Car cars[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of car " << i + 1 << endl;
        input(cars[i]);
    }
cout << "\nCars with price less than 5 lakh:\n";
for (int i = 0; i < n; i++) {
        if (cars[i].price < 500000) {
            display(cars[i]);
            cout << endl;
        }
    }

    return 0;
}
