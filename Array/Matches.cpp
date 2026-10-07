// 4. A cricket team scored runs in 10 matches. Store the runs in an array and calculate the average score.

#include <iostream>
using namespace std;

float calculateAverage(int runs[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += runs[i];
    }

    return (float)sum / n;
}

int main()
{
    int runs[10];

    cout << "Enter runs scored in 10 matches:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> runs[i];
    }

    float average = calculateAverage(runs, 10);

    cout << "Average Score: " << average << endl;

    return 0;
}

