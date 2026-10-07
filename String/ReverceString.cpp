// 5. Write a program to reverse a string without using built-in functions.

#include <iostream>
using namespace std;

void reverseString(string &str)
{
    int start = 0;
    int end = 0;

    while (str[end] != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverseString(str);

    cout << "Reversed string: " << str;

    return 0;
}
