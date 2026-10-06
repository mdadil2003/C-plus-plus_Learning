// 5.   Define a structure Library with book id, title, and status (issued/available). Create functions to issue and return a book. 

#include <iostream>
using namespace std;
struct Library {
    int bookId;
    string title;
    string status;
};
void issueBook(Library &b) {
    if (b.status == "available") {
        b.status = "issued";
        cout << "Book issued successfully." << endl;
    } else {
        cout << "Book is already issued." << endl;
    }
}
void returnBook(Library &b) {
    if (b.status == "issued") {
        b.status = "available";
        cout << "Book returned successfully." << endl;
    } else {
        cout << "Book is already available." << endl;
    }
}
void display(Library b) {
    cout << "\nBook ID: " << b.bookId << endl;
    cout << "Title: " << b.title << endl;
    cout << "Status: " << b.status << endl;
}
int main() {
    Library b;
    int choice;
    cout << "Enter book ID: ";
    cin >> b.bookId;
    cout << "Enter book title: ";
    cin >> b.title;
    b.status = "available";
 do {
 cout << "\n1. Issue Book";
        cout << "\n2. Return Book";
        cout << "\n3. Display Book";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                issueBook(b);
                Break;
            case 2:
                returnBook(b);
                Break;
            case 3:
                display(b);
                Break;
               case 4:
                cout << "Exiting...";
                Break;
               default:
                   cout << "Invalid choice.";
        }
    } while (choice != 4);
return 0;
}
