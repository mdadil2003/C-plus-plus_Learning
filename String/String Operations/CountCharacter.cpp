// 9. Input a sentence and count how many times a particular character occurs.

#include <iostream>
using namespace std;

int countCharacter(string str, char ch)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    return count;
}

int main()
{
    string str;
    char ch;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Enter character to search: ";
    cin >> ch;

    cout << "Character occurs " << countCharacter(str, ch) << " times";

    return 0;
}
