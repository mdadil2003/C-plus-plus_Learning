// 4.	Create a base class Shape with a virtual function area(). Derive classes Circle and Rectangle that override area(). Demonstrate run-time polymorphism by storing different shapes in a base class pointer.


#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area()
    {
        return 0;
    }

    virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
    double radius;

    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
public:
    double length, breadth;

    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    double area() override
    {
        return length * breadth;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 4);

    Shape* ptr;

    ptr = &c;
    cout << "Circle area: " << ptr->area() << endl;

    ptr = &r;
    cout << "Rectangle area: " << ptr->area() << endl;

    return 0;
}
