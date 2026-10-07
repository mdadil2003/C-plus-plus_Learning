// 6. Input two strings and concatenate them.

#include <iostream>
using namespace std;

void concatenate(string &str1, string str2)
{
    int i = 0;
    int j = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    concatenate(str1, str2);

    cout << "Concatenated string: " << str1;

    return 0;
}
