// 7.	Define class Teacher with subject, class Researcher with specialization, and class Professor that inherits from both.

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string subject;
};

class Researcher
{
public:
    string specialization;
};

class Professor : public Teacher, public Researcher
{
public:
    string name;

    void input()
    {
        cout << "Enter professor name: ";
        getline(cin >> ws, name);

        cout << "Enter subject: ";
        getline(cin >> ws, subject);

        cout << "Enter specialization: ";
        getline(cin >> ws, specialization);
    }

    void display()
    {
        cout << "\n--- Professor Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main()
{
    Professor p;

    p.input();
    p.display();

    return 0;
}
