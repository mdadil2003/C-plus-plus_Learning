// 5.	Write a class template Stack<T> with push, pop, and display functions. Demonstrate with integers and strings.

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
private:
    T arr[100];
    int top;

public:
    Stack() : top(-1) {}

    void push(T value)
    {
        if (top == 99)
        {
            cout << "Stack is full!" << endl;
            return;
        }

        arr[++top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Removed: " << arr[top--] << endl;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Integer stack: ";
    s1.display();
    s1.pop();

    Stack<string> s2;
    s2.push("Adil");
    s2.push("raza");
    s2.push("rajuu");

    cout << "String stack: ";
    s2.display();

    return 0;
}