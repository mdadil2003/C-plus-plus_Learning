// 12.	Write a program using stack to reverse a string.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string text;
    stack<char> s;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text)
        s.push(ch);

    cout << "Reversed string: ";

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}
