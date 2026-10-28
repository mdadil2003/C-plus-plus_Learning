// 5.	Demonstrate hybrid inheritance using a class Student inheriting from Person, and then Result inheriting from both Exam and Sports. Resolve ambiguity using scope resolution.

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    int rollNumber;

    void displayStudent()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Exam : public Student
{
public:
    int examMarks;
};

class Sports : public Student
{
public:
    int sportsMarks;
};

class Result : public Exam, public Sports
{
public:
    void display()
    {
        cout << "\n--- Result ---\n";

        cout << "Name: " << Exam::Person::name << endl;
        cout << "Roll Number: "
             << Exam::Student::rollNumber << endl;

        cout << "Exam Marks: " << examMarks << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total: " << examMarks + sportsMarks << endl;
    }
};

int main()
{
    Result r;

    r.Exam::Person::name = "Adil";
    r.Exam::Student::rollNumber = 101;

    cout << "Enter exam marks: ";
    cin >> r.examMarks;

    cout << "Enter sports marks: ";
    cin >> r.sportsMarks;

    r.display();

    return 0;
}
