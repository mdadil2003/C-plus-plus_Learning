// 8.	Define a base class Employee with virtual function calculateSalary(). Derive classes Manager and Developer, each calculating salary differently. Use a base class pointer to call correct functions.


#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary()
    {
        return 0;
    }

    virtual ~Employee() = default;
};

class Manager : public Employee
{
private:
    double basicSalary, bonus;

public:
    Manager(double s, double b)
    {
        basicSalary = s;
        bonus = b;
    }

    double calculateSalary() override
    {
        return basicSalary + bonus;
    }
};

class Developer : public Employee
{
private:
    double basicSalary, overtimePay;

public:
    Developer(double s, double o)
    {
        basicSalary = s;
        overtimePay = o;
    }

    double calculateSalary() override
    {
        return basicSalary + overtimePay;
    }
};

int main()
{
    Manager m(60000, 15000);
    Developer d(40000, 5000);

    Employee* ptr;

    ptr = &m;
    cout << "Manager Salary: Rs. "
         << ptr->calculateSalary() << endl;

    ptr = &d;
    cout << "Developer Salary: Rs. "
         << ptr->calculateSalary() << endl;

    return 0;
}
