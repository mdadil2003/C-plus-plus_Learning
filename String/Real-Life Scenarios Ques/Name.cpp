// 3. Input a full name and print only the initials (e.g., “A. P. J. Abdul Kalam”).

#include <iostream>
using namespace std;

void printInitials(string name)
{
    if (name[0] != ' ')
        cout << name[0] << ". ";

    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            cout << name[i + 1] << ". ";
        }
    }
}

int main()
{
    string name;

    cout << "Enter full name: ";
    getline(cin, name);

    printInitials(name);

    return 0;
}
