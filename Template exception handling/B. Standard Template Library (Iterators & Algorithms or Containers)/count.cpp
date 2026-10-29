// 17.	Use count() algorithm to count occurrences of a character in a string (stored in vector).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> letters = {'a', 'b', 'a', 'c', 'a', 'b'};
    char target;

    cout << "Enter character to count: ";
    cin >> target;

    int result = count(letters.begin(), letters.end(), target);

    cout << "Occurrences of " << target << " = " << result;

    return 0;
}