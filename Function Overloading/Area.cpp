// 2.	A class Area has overloaded functions calculate() to find:
//o	Area of a circle (given radius)
//o	Area of a rectangle (given length & breadth)
//o	Area of a triangle (given base & height)

#include<iostream>
using namespace std;
class Calculator
{
	public:
		int add(int,int);
		int add(int,int,int);
		float add(float,float);
};
int Calculator::add(int a, int b)
{
	return a+b;
}
int Calculator::add(int a,int b,int c)
{
	return a+b+c;
}
float Calculator::add(float a,float b)
{
	return a+b;
}
int main()
{
	Calculator c1;
	int a=c1.add(1,2);
	std::cout<<a<<endl;
	int b=c1.add(1,2,3);
	std::cout<<b<<endl;
	float c=c1.add(3.3f,4.9f);
	std::cout<<c<<endl;
}
