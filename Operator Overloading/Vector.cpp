// 8.	Create a class Vector with x, y, z components. Overload the - operator to subtract two vectors.


#include <iostream>
using namespace std;

class Vector
{
private:
    int x, y, z;

public:
    void input()
    {
        cout << "Enter x, y, z components: ";
        cin >> x >> y >> z;
    }

    Vector operator-(Vector v)
    {
        Vector temp;

        temp.x = x - v.x;
        temp.y = y - v.y;
        temp.z = z - v.z;

        return temp;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main()
{
    Vector v1, v2, v3;

    cout << "Enter first vector:" << endl;
    v1.input();

    cout << "\nEnter second vector:" << endl;
    v2.input();

    v3 = v1 - v2;

    cout << "\nFirst vector: ";
    v1.display();

    cout << "Second vector: ";
    v2.display();

    cout << "Subtraction result: ";
    v3.display();

    return 0;
}
