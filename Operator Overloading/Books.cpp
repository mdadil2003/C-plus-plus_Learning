// 10.	Create a class Book with price. Overload the < operator to compare book prices.


#include <iostream>
using namespace std;

class Book
{
private:
    double price;

public:
    void input()
    {
        cout << "Enter book price: ";
        cin >> price;
    }



    bool operator<(Book b)
    {
        return price < b.price;
    }

    void display()
    {
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book b1, b2;

    cout << "Enter details of first book:" << endl;
    b1.input();

    cout << "\nEnter details of second book:" << endl;
    b2.input();

    cout << "\nFirst book ";
    b1.display();

    cout << "Second book ";
    b2.display();

    if(b1 < b2)
    {
        cout << "First book is cheaper.";
    }
    else if(b2 < b1)
    {
        cout << "Second book is cheaper.";
    }
    else
    {
        cout << "Both books have the same price.";
    }

    return 0;
}
