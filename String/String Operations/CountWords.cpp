// 8. Write a program to count the number of words in a given string.

#include <iostream>
using namespace std;

int countWords(string str)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && !inWord)
        {
            count++;
            inWord = true;
        }
        else if (str[i] == ' ')
        {
            inWord = false;
        }
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str);

    return 0;
}
