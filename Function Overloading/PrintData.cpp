// 3.	Define a class PrintData with overloaded functions print() to display:
// o	An integer
// o	A float
// o	A string

#include<iostream>
using namespace std;
class PrintData{
	public:
		void print(int);
		void print(float);
		void print(string);
};
void PrintData::print(int a)
{
	std::cout<<"Integer="<<a<<endl;
}
void PrintData::print(float a)
{
	std::cout<<"float="<<a<<endl;
}
void PrintData::print(string a)
{
	std::cout<<"String="<<a<<endl;
}
int main()
{  
    string s="Hello";
	PrintData pd;
	pd.print(12);
	pd.print(3.2f);
	pd.print(s);
}
