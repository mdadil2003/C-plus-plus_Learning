#include <iostream>
using namespace std;

int main()
{
    int marks;
    float attendance;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Attendance Percentage: ";
    cin >> attendance;

    if(marks >= 90 && attendance >= 75)
    {
        cout << "Eligible for Scholarship";
    }
    else
    {
        cout << "Not Eligible for Scholarship";
    }

    return 0;
}