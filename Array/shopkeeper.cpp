// 1. A shopkeeper wants to store prices of 10 items and display the highest and lowest price.

#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	std::cout<<"Enter the prices"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max)
		    max=arr[i];
	}
	std::cout<<"Highest Price:"<<max<<endl;
	int min=arr[0];
		for(int i=0;i<10;i++)
	{
		if(arr[i]<min)
		    min=arr[i];
	}
		std::cout<<"Lowest Price:"<<min<<endl;
	}
