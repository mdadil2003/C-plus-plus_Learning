// 7.	A class Time has hours and minutes. Overload the ++ operator to increment time by one minute.


#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    void input()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;
    }
    void operator++()
    {
        minutes++;

        if(minutes == 60)
        {
            minutes = 0;
            hours++;
        }

        if(hours == 24)
        {
            hours = 0;
        }
    }

    void display()
    {
        cout << "Time: ";

        if(hours < 10)
            cout << "0";

        cout << hours << ":";

        if(minutes < 10)
            cout << "0";

        cout << minutes << endl;
    }
};

int main()
{
    Time t;

    t.input();

    cout << "\nBefore increment: ";
    t.display();

    ++t;

    cout << "After increment: ";
    t.display();

    return 0;
}
