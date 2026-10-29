// 11.  Use multimap to store book titles with multiple authors.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    multimap<string, string> books;

    books.insert({"C++ Programming", "Bjarne"});
    books.insert({"C++ Programming", "Herbert"});
    books.insert({"Java Programming", "James"});
    books.insert({"Python Basics", "Guido"});

    cout << "Book titles and authors:\n";

    for (auto p : books)
        cout << "Book: " << p.first
             << ", Author: " << p.second << endl;

    return 0;
}
