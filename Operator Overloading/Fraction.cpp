// 5.	A class Fraction has numerator and denominator. Overload the / operator to divide two fractions. 


#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }
    Fraction operator/(Fraction f)
    {
        Fraction temp;

        temp.numerator = numerator * f.denominator;
        temp.denominator = denominator * f.numerator;

        return temp;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, f3;

    cout << "Enter first fraction:" << endl;
    f1.input();

    cout << "\nEnter second fraction:" << endl;
    f2.input();

    f3 = f1 / f2;

    cout << "\nFirst fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    cout << "Result of division: ";
    f3.display();

    return 0;
}
