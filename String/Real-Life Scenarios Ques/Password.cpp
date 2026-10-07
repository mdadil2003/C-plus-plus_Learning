// 4. A password system requires: At least 8 characters, At least one digit, At least one special character WAP to check whether the entered password is valid.

#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(string password)
{
    bool digit = false;
    bool special = false;
    int length = 0;

    for (int i = 0; password[i] != '\0'; i++)
    {
        length++;

        if (password[i] >= '0' && password[i] <= '9')
            digit = true;

        if (!((password[i] >= 'a' && password[i] <= 'z') ||
              (password[i] >= 'A' && password[i] <= 'Z') ||
              (password[i] >= '0' && password[i] <= '9')))
        {
            special = true;
        }
    }

    return length >= 8 && digit && special;
}

int main()
{
    string password;

    cout << "Enter password: ";
    cin >> password;

    if (isValidPassword(password))
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}
