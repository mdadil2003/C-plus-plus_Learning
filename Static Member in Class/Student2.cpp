// 4. Write a program where class Student has static data member totalStudents. Increment it whenever a new student object is created.

#include<iostream>
using namespace std;
class Student2
{
	int rollno;
	string name;
	static int totalStudents;
	public:
		Student2(int r,string s)
		{
			rollno=r;
			name=s;
			totalStudents++;
		}
		void display()
		{
			std::cout<<"Name:"<<name<<" rollno:"<<rollno<<" totalstudents:"<<totalStudents<<endl;
		}
	
};
int Student2::totalStudents=0;
int main()
{
	Student2 s1(1,"Adil");
	s1.display();
	Student2 s2(2,"Raza");
	s2.display();
	return 0;
}
