// 3.	Create a class Employee with empID and salary. Derive a class Manager that adds department. Display manager details.


#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int empID;
    double salary;
};

class Manager : public Employee
{
public:
    string department;

    void input()
    {
        cout << "Enter employee ID: ";
        cin >> empID;

        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter department: ";
        getline(cin >> ws, department);
    }

    void display()
    {
        cout << "\n--- Manager Details ---\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m;

    m.input();
    m.display();

    return 0;
}
