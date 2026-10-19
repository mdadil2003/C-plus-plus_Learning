// 9.	Define a class Marks with subject scores. Overload the += operator to update total marks when new marks are added.


#include <iostream>
using namespace std;

class Marks
{
private:
    int total;

public:
    void input()
    {
        cout << "Enter initial total marks: ";
        cin >> total;
    }

    void operator+=(int newMarks)
    {
        total += newMarks;
    }

    void display()
    {
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Marks m;
    int newMarks;

    m.input();

    cout << "\nBefore adding new marks: ";
    m.display();

    cout << "Enter new marks to add: ";
    cin >> newMarks;

    m += newMarks;

    cout << "\nAfter adding new marks: ";
    m.display();

    return 0;
}
