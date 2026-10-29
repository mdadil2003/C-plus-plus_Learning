// 6.	Implement a template class Array<T> with functionalities: insert, delete, and display elements.

#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
    T arr[100];
    int size;

public:
    Array() : size(0) {}

    void insert(T value, int position)
    {
        if (size == 100 || position < 0 || position > size)
        {
            cout << "Invalid insertion!" << endl;
            return;
        }

        for (int i = size; i > position; i--)
            arr[i] = arr[i - 1];

        arr[position] = value;
        size++;
    }

    void remove(int position)
    {
        if (position < 0 || position >= size)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = position; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    Array<int> a;

    a.insert(10, 0);
    a.insert(30, 1);
    a.insert(20, 1);

    cout << "After insertion: ";
    a.display();

    a.remove(1);

    cout << "After deletion: ";
    a.display();

    return 0;
}