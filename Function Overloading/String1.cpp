/* 6. Write a program in C++ having class string1 with members as
Int length;
Char * buffer;
Implement this class using copy constructor, destructor , parameterized
constructor and default constructor. */

#include<iostream>
#include<string.h>
using namespace std;

class String1
{
	int length;
	char *buffer;
	public:
		String1()
		{
			length=0;
			buffer=new char;
			*buffer='\0';
		}
		String1(String1 &);
		String1(const char* );
		void display();
	
		~String1()
{
	if(buffer)
	  delete[] buffer;
}

};
String1::String1(const char* p)
{
	length=strlen(p);
	buffer=new char[length+1];
}
String1::String1(String1 &c)
{
	length=c.length;
	buffer=c.buffer;
}
void String1::display()
{
	std::cout<<"Length:"<<length<<" string is"<<buffer<<endl;
}
int main()
{
	std::cout<<"Non-parameterized constructor"<<endl;
	String1 s;
	s.display();
	String1 d(String1 &s);
	
	std::cout<<"parameterized constructor"<<endl;
	String1 e("Aadil");
	e.display();	
}

