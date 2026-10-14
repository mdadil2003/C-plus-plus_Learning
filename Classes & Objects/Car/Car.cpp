
#include<iostream>
#include"Car1.h"
using namespace std;
void Car1::getDetails()
{
    std::cout<<"Enter brand name: ";
    cin>>brand;
    std::cout<<"enter car model: ";
    cin>>model;
    std::cout<<"Enter car price: ";
    cin>>price;
}
void Car1::display()
{
    std::cout<<"brand name:"<<brand<<" car model:"<<model<<" price:"<<price<<endl;
}
