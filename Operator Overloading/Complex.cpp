// 1.	Create a class Complex to represent complex numbers. Overload the + operator to add two complex numbers.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}
