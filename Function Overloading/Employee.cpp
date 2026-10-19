// 4.	A class Employee has an overloaded function setData() to accept:
// o	Employee name and ID
// o	Employee name, ID, and salary

#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int id;
		int salary;
public:
void setData(string,int);
void setData(string,int,int);	
};
void Employee::setData(string a,int b)
{
	name=a;
	id=b;
	std::cout<<"name:"<<name<<" id:"<<id<<endl;
}
void Employee::setData(string a,int b,int c)
{
	name=a;
	id=b;
	salary=c;
	std::cout<<"name:"<<name<<" id:"<<id<<" salary:"<<salary<<endl;
}
int main()
{
	Employee e;
	e.setData("Adil",1);
	e.setData("Adil",1,950000);
}
