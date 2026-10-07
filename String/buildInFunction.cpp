// 3. Write a program to find the length of a string without using built-in functions.

#include <iostream>
using namespace std;

int findLength(string str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Length of string: " << findLength(str);

    return 0;
}
