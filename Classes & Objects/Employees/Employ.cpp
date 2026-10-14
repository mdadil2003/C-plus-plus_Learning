#include<iostream>
#include"emp.h"
using namespace std;
void Employee::getDetails()
{
    std::cout<<"enter name: ";
    cin>>name;
    std::cout<<"enter designation: ";
    cin>>designation;
    std::cout<<"Enter salary: ";
    cin>>salary;
}
void Employee::display(int *p,int n)
{
    std::cout<<"name:"<<name<<" designation:"<<designation<<" salary:"<<endl;  
}

int Employee::getsalary()
{
    return salary;
}