// 2. Input a string and check if it is a palindrome (e.g., “madam”, “level”).

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
            return false;

        start++;
        end--;
    }

    return true;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
