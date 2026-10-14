#include <iostream>
#include "Library.h"

using namespace std;

void Library::get()
{
    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Book Title: ";
    cin >> title;

    cout << "Enter Author Name: ";
    cin >> author;

    availability = true;
}

void Library::issueBook()
{
    if (availability == true)
    {
        availability = false;
        cout << "Book issued successfully." << endl;
    }
    else
    {
        cout << "Book is already issued." << endl;
    }
}

void Library::returnBook()
{
    if (availability == false)
    {
        availability = true;
        cout << "Book returned successfully." << endl;
    }
    else
    {
        cout << "Book is already available." << endl;
    }
}

void Library::display()
{
    cout << "\nBook ID: " << bookID<< endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;

    if (availability == true)
        cout << "Status: Available" << endl;
    else
        cout << "Status: Issued" << endl;
}
