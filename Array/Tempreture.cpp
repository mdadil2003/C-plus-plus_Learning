// 10. Store daily temperatures of 7 days and display the hottest and coldest day.

#include <iostream>
using namespace std;

void findTemperature(int temp[], int n)
{
    int hottest = 0;
    int coldest = 0;

    for (int i = 1; i < n; i++)
    {
        if (temp[i] > temp[hottest])
            hottest = i;

        if (temp[i] < temp[coldest])
            coldest = i;
    }

    cout << "Hottest Day: Day " << hottest + 1 << " (" << temp[hottest] << "°C)" << endl;
    cout << "Coldest Day: Day " << coldest + 1 << " (" << temp[coldest] << "°C)" << endl;
}

int main()
{
    int temp[7];

    cout << "Enter temperatures of 7 days:" << endl;

    for (int i = 0; i < 7; i++)
    {
        cin >> temp[i];
    }

    findTemperature(temp, 7);

    return 0;
}
