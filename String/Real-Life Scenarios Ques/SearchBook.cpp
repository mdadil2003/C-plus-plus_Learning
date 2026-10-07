// 1. A library wants to store book titles. Write a program to search for a book by its title.

#include <iostream>
#include <string>
using namespace std;

bool searchBook(string books[], int n, string title)
{
    for (int i = 0; i < n; i++)
    {
        if (books[i] == title)
            return true;
    }

    return false;
}

int main()
{
    string books[5];
    string title;

    cout << "Enter 5 book titles:" << endl;

    for (int i = 0; i < 5; i++)
    {
        getline(cin, books[i]);
    }

    cout << "Enter book title to search: ";
    getline(cin, title);

    if (searchBook(books, 5, title))
        cout << "Book found";
    else
        cout << "Book not found";

    return 0;
}
