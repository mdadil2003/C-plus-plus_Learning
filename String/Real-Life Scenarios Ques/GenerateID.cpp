// 2. A school wants to generate student IDs by combining first three letters of name + roll number. Write a program to generate IDs.

#include <iostream>
#include <string>
using namespace std;

string generateID(string name, int rollNo)
{
    string id;

    for (int i = 0; i < 3 && i < name.length(); i++)
    {
        id += name[i];
    }

    id += to_string(rollNo);

    return id;
}

int main()
{
    string name;
    int rollNo;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Student ID: " << generateID(name, rollNo);

    return 0;
}
