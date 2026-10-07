// 9. A class of 30 students appeared in a test. Store marks in an array and display the highest scorer.

#include <iostream>
using namespace std;

int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }

    return highest;
}

int main()
{
    int marks[30];

    cout << "Enter marks of 30 students:" << endl;

    for (int i = 0; i < 30; i++)
    {
        cin >> marks[i];
    }

    cout << "Highest Score: " << findHighest(marks, 30) << endl;

    return 0;
}

