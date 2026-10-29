// 9.	Write a program using map to store roll number and student name pairs. Display them.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> students;
    int n, roll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
        students[roll] = name;
    }

    cout << "\nStudent records:\n";

    for (auto p : students)
        cout << "Roll: " << p.first
             << ", Name: " << p.second << endl;

    return 0;
}
