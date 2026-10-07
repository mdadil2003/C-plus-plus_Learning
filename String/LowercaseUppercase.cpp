// 4. Input a string and convert all lowercase letters to uppercase.

#include <iostream>
using namespace std;

void convertToUpper(string &str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    convertToUpper(str);

    cout << "Uppercase string: " << str;

    return 0;
}
