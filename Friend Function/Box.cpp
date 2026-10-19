// 1. Write a class Box with length, breadth, and height. Write a friend function to calculate the volume of the box.

#include<iostream>
using namespace std;
class Box
{
	private:
		int length;
		int breadth;
		int height;
	public:
		friend  void calculate(Box);
};
void calculate(Box b1)

{
	std::cout<<"Enter length breadth height"<<endl;
	cin>>b1.length>>b1.breadth>>b1.height;
	std::cout<<"Volume="<<b1.length*b1.breadth*b1.height<<endl;
}
int main()
{
	Box b;
	calculate(b);
}
