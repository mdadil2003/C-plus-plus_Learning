// 10.	Create an abstract class Employee with pure virtual function calculatePay(). Derive HourlyEmployee and SalariedEmployee that implement the function differently.


#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculatePay() = 0;

    virtual ~Employee() = default;
};

class HourlyEmployee : public Employee
{
private:
    double hours, rate;

public:
    HourlyEmployee(double h, double r)
    {
        hours = h;
        rate = r;
    }

    double calculatePay() override
    {
        return hours * rate;
    }
};

class SalariedEmployee : public Employee
{
private:
    double monthlySalary;

public:
    SalariedEmployee(double s)
    {
        monthlySalary = s;
    }

    double calculatePay() override
    {
        return monthlySalary;
    }
};

int main()
{
    HourlyEmployee h(160, 250);
    SalariedEmployee s(45000);

    Employee* ptr;

    ptr = &h;
    cout << "Hourly Employee Pay: Rs. "
         << ptr->calculatePay() << endl;

    ptr = &s;
    cout << "Salaried Employee Pay: Rs. "
         << ptr->calculatePay() << endl;

    return 0;
}
