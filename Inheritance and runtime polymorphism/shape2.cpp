// 11.	Define an abstract class Shape with pure virtual function perimeter(). Derive Square and Circle that implement it.


#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double perimeter() = 0;

    virtual ~Shape() = default;
};

class Square : public Shape
{
private:
    double side;

public:
    Square(double s)
    {
        side = s;
    }

    double perimeter() override
    {
        return 4 * side;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double perimeter() override
    {
        return 2 * 3.14159 * radius;
    }
};

int main()
{
    Square s(5);
    Circle c(3);

    Shape* ptr;

    ptr = &s;
    cout << "Square Perimeter: "
         << ptr->perimeter() << endl;

    ptr = &c;
    cout << "Circle Perimeter: "
         << ptr->perimeter() << endl;

    return 0;
}
