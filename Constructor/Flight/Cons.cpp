#include<iostream>
#include"Flight.h"
using namespace std;
Flight::Flight(int a1,string s1,string b)
{
fnumber=a1;
a=s1;
    d=b;
}
void Flight::display()
{
  std::cout<<"flight number:"<<fnumber<<"sourde:"<<a<<" destination:"<<d<<endl;
}
