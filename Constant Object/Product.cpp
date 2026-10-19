// 2. Define a class Product with attributes name, price. Write a constant function getPrice() to return price. Create a const object and call only constant functions.

#include<iostream>
using namespace std;
class Product
{
    int pid;
	int price;
	public:
		Product(int p,int r);
	
		int getPrice() const;
};
Product::Product(int p,int r)
	{
			pid=p;
			price=r;
		}
int Product::getPrice() const
{
	return price;
}
int main()
{ 
	const Product p(1,7600);
	int r=p.getPrice();
	std::cout<<"Price: "<<r<<endl;
	Product p1(2,5500);
	int r1=p1.getPrice();
	std::cout<<"Price: "<<r1<<endl;
	
}

