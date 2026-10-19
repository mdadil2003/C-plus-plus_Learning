// 3. A class Company has employee name and salary, but a static member companyName. Show that all employees share the same company name.

#include<iostream>
using namespace std;
class Company
{
	string name;
	int salary;
	static string companyName;
	public:
		Company(string n,int s)
		{
			name=n;
			salary=s;
			
		}
		void display()
		{
			cout<<"Name:"<<name<<" salary="<<salary<<" Company name:"<<companyName<<endl;
		}
};
string Company::companyName="Tata";
int main()
{
	Company c1("saqib",900000);
	c1.display();
	Company c2("adil",100000);
c2.display();
	Company c3("raza",900000);
	c3.display();
}
