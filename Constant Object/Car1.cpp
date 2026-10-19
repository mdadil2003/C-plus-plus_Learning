// 4. Design a class Car with speed and mileage. Demonstrate the use of a const object to only view details.

#include<iostream>
using namespace std;
class Car1
{
	int speed;
	int mileage;
	public:
		Car1(int s,int m)
		{
			speed=s;
			mileage=m;
		}
		void display() ;
		void display1() const;
};
void Car1::display() 
{
	cout<<"speed "<<speed<<" mileage "<<mileage<<endl;
}
void Car1::display1() const
{
	cout<<"speed "<<speed<<" mileage "<<mileage<<endl;
}
int main()
{
	const Car1 c(10,20);
	
	c.display1();
	
}
