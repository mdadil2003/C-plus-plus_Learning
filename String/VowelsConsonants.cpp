// 1. Write a program to input a string and count the number of vowels and consonants.
#include <iostream>
#include <string>
using namespace std;

void countVowelsConsonants(string str)
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    countVowelsConsonants(str);

    return 0;
}
