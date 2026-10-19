// 5. A class Employee contains id and salary. Show how a const object restricts access only to const functions.

#include<iostream>
using namespace std;
class Employee{
	int id;
	int salary;
	public:
		Employee(int i,int s)
		{
			id=i;
			salary=s;
		}
		void getEmployee() const;
		void getid();
};
void Employee::getEmployee() const
{
	std::cout<<"the salary is "<<salary<<endl;
}
void Employee::getid()
{
	std::cout<<"id is "<<id<<endl;
}
int main()
{
	const Employee e(1,30000);
	e.getEmployee();
}

