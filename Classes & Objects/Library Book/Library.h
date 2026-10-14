// 4. Design a class LibraryBook with data members: book ID, title, author, availability. Write functions to issue and return a book.

class Library
{
    private:
        int bookID;
        char title[20];
        char author[20];
        bool availability;
    public:
    void get();
    void issueBook();
    void returnBook();
    void display();
};
