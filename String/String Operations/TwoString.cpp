// 7. Input two strings and check whether they are equal or not.

#include <iostream>
using namespace std;

bool compareStrings(string str1, string str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return false;

        i++;
    }

    return str1[i] == '\0' && str2[i] == '\0';
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (compareStrings(str1, str2))
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
