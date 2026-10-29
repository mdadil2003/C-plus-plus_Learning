// 3.	Write a class template Calculator<T> with functions to perform addition, subtraction, multiplication, and division.

#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T a, T b)       { return a + b; }
    T subtract(T a, T b)  { return a - b; }
    T multiply(T a, T b)  { return a * b; }

    T divide(T a, T b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return T{};
        }
        return a / b;
    }
};

int main()
{
    Calculator<double> c;
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << c.add(a, b) << endl;
    cout << "Subtraction: " << c.subtract(a, b) << endl;
    cout << "Multiplication: " << c.multiply(a, b) << endl;

    if (b != 0)
        cout << "Division: " << c.divide(a, b) << endl;
    else
        c.divide(a, b);

    return 0;
}
