// 8.	Use list to create a list of student names. Insert and delete names dynamically.

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> students;

    students.push_back("Aman");
    students.push_back("Raya");
    students.push_back("Rahul");

    cout << "Original list: ";
    for (string name : students)
        cout << name << " ";

    students.push_front("Adil");
    cout << "\nAfter insertion: ";
    for (string name : students)
        cout << name << " ";

    students.remove("Riya");

    cout << "\nAfter deleting Raya: ";
    for (string name : students)
        cout << name << " ";

    return 0;
}