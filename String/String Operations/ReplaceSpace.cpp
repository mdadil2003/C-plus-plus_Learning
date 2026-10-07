// 10. Input a string and replace all spaces with -.

#include <iostream>
using namespace std;

void replaceSpaces(string &str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            str[i] = '-';
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    replaceSpaces(str);

    cout << "Result: " << str;

    return 0;
}
