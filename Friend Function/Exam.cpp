// 2. Define two classes Student and Exam. Use a friend function to access private marks of Student in Exam for grade calculation.

#include<iostream>
using namespace std;

class Exam;
class Student
{
	private:
		int rollno;
		int marks;
	public:
		friend void calculate(Student,Exam);
};
class Exam
{
	private:
		char grade;
	public:
			friend void calculate(Student,Exam);
};
void calculate(Student s1,Exam e1)
{
	std::cout<<"Enter rollno"<<endl;
	cin>>s1.rollno;
	std::cout<<"Enter marks"<<endl;
	cin>>s1.marks;
	if(s1.marks>90)
	   e1.grade='A';
	else if(s1.marks>75 && s1.marks<=90)
	   e1.grade='B';
	else if(s1.marks>50 && s1.marks<=75)
	   e1.grade='C';
	else
	  e1.grade='F';
	   
	std::cout<<"Grade="<<e1.grade<<endl;
}
int main()
{
	Student s;
	Exam e;
	calculate(s,e);
}
