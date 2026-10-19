// 3.	A class String has a character array. Overload the == operator to compare two strings.


#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char str[100];

public:
    void input()
    {
        cout << "Enter string: ";
        cin >> str;
    }

    bool operator==(String s)
    {
        return strcmp(str, s.str) == 0;
    }
};

int main()
{
    String s1, s2;

    cout << "Enter first string:" << endl;
    s1.input();

    cout << "Enter second string:" << endl;
    s2.input();

    if(s1 == s2)
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << "Strings are not equal";
    }

    return 0;
}
