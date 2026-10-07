// 2. Write a program to input marks of 5 subjects for a student and calculate total, average, and percentage.

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int marks[5];
    std::cout << "enter marks of 5 subject: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }
    std::cout << "Total marks:" << sum << endl;
    std::cout << "Average:" << sum / 5 << endl;
    std::cout << "Percentage:" << (sum * 100) / 500 << endl;
}
