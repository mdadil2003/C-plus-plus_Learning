// 5. Write a program with a class Volume having overloaded functions to compute:
// o Volume of a cube
// o Volume of a cuboid
// Volume of a cylinder

#include <iostream>
using namespace std;

class Volume {
    
public:
    void calculate(double a) {
        std::cout<<"Volume of Cube:"<<a*a*a<<endl;
    }

    void calculate(double a,double b,double c) {
        std::cout<<"Volume of Cuboid="<<a*b*c<<endl;
    }

    void calculate(double a,double b) {
        std::cout<<"Volume of Cylinder="<<3.14*a*a*b<<endl;
    }
};

int main() {
    Volume v;

    double a,b,c,d,e;

    cout << "Enter side of cube: ";
    cin >> a;
    v.calculate(a);

    cout << "Enter length, breadth and height of cuboid: ";
    cin >>b>>c>>d;
    v.calculate(b,c,d);

    std::cout<<"Enter radius and height of cylinder:";
    cin >>e>>d;
    v.calculate(e,d);

    return 0;
}
