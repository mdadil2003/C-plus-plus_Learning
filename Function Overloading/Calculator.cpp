// 1. 1.	Create a class Calculator that has overloaded functions add() to:                   o	Add two integers o	Add three integers o	Add two floating-point numbers

#include<iostream>
using namespace std;
class Area1
{
	public:
		void calculate(float);
		void calculate(int,int);
		void calculate(float,float);
};
void Area1::calculate(float a)
{
    float c;
    c=3.14*a*a;
	std::cout<<"Area of circle:"<<c<<endl;
}
void Area1::calculate(int a,int b)
{  
std::cout<<"Area of rectangle:"<<a*b<<endl;
	
}
void Area1::calculate(float a,float b)
{
	std::cout<<"Area of triangle:"<<(a*b)/2<<endl;
}
int main()
{
	Area1 a1;
	a1.calculate(3.2f);
	a1.calculate(5,7);
	a1.calculate(3.6f,3.9f);
}

