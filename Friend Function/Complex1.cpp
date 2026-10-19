// 4. Write a class Complex and use a friend function to add two complex numbers.
#include<iostream>
using namespace std;

class Complex1;
class Complex1 {
    private:
        int real;
		int imag;
    public:
        friend Complex1 add(Complex1,Complex1);
        friend void display(Complex1);
};
Complex1 add(Complex1 a,Complex1 b) {
    Complex1 c;
    std::cout<<"Enter real and imaginary parts of first number:";
    cin>>a.real>>a.imag;

   std::cout<<"Enter real and imaginary parts of second number:";
   cin>>b.real>>b.imag;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}
void display(Complex1 a) {
    std::cout<<a.real<<"+"<<a.imag<<"i"<<endl;
}

int main() {
    Complex1 a, b, c;

    c=add(a,b);

    std::cout<<"Sum =";
    display(c);

    return 0;
}
