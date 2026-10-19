// 3. Write a program where a const object of class Book can call only read-only functions like getTitle() but cannot call modifying functions.

#include<iostream>
using namespace std;
class Library
{
	int bookid;
	static int totalBooks;
	public:
		Library(int r)
		{
			bookid=r;
		}
		void  returnBook(int id)
		{
			totalBooks++;
			cout<<"returning Book with id "<<id<<endl;
			cout<<"Total Books Available: "<<totalBooks<<endl;
			
		}
		void bookisue(int id)
		{ 
			totalBooks--;
			cout<<"Issuing book with id "<<id<<endl;
			cout<<"Total Book Available: "<<totalBooks<<endl;
		}
		void getBookId() const;
	
};
void Library::getBookId() const
		{
			cout<<"Book Id: "<<bookid<<endl;
		}
int Library::totalBooks=1;
int main()
{

Library r(1);
r.bookisue(1);
r.returnBook(1);
const Library r1(2);
r1.getBookId();
	
}
