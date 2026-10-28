// 1.	Create a base class Person with data members name and age. Derive a class Student that adds rollNumber and marks. Write a program to display details of a student.


#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void inputPerson()
    {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    int rollNumber;
    float marks;

    void inputStudent()
    {
        inputPerson();

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.inputStudent();
    s.display();

    return 0;
}
