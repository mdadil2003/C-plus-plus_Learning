#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    if(marks >= 40)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}