// 2.	Define a class Distance with feet and inches. Overload the + operator to add two distances.


#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        temp.feet = temp.feet + temp.inches / 12;
        temp.inches = temp.inches % 12;

        return temp;
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    int f1, i1, f2, i2;

    cout << "Enter first distance (feet inches): ";
    cin >> f1 >> i1;

    cout << "Enter second distance (feet inches): ";
    cin >> f2 >> i2;

    Distance d1(f1, i1);
    Distance d2(f2, i2);

    Distance d3 = d1 + d2;

    cout << "\nFirst Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
