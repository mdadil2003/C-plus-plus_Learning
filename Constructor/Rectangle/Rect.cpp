#include<iostream>
#include"Rectangle.h"
using namespace std;
Rectangle::Rectangle(int a,int b)
{
    length=a;
    breadth=b;
}
void Rectangle::area()
{
   
    std::cout<<"area of reactangle:"<<length*breadth<<endl;
}
