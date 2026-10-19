//5. A class Library maintains static member totalBooks. Write a function to update whenever a book is issued or returned.

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
			cout<<"returning Book with id"<<id<<endl;
			cout<<"Total Books Available:"<<totalBooks<<endl;
			
		}
		void bookisue(int id)
		{ 
			totalBooks--;
			cout<<"Issuing book with id"<<id<<endl;
			cout<<"Total Book Available:"<<totalBooks<<endl;
		}
};
int Library::totalBooks=1;
int main()
{

Library r(1);
r.bookisue(1);
r.returnBook(1);
	
}
