// 13.	Create a queue to simulate a ticket booking system.

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> customers;
    int choice;
    string name;

    do
    {
        cout << "\n1. Join queue";
        cout << "\n2. Serve next customer";
        cout << "\n3. Display next customer";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter customer name: ";
            cin >> name;
            customers.push(name);
            cout << name << " joined the queue.\n";
            break;

        case 2:
            if (!customers.empty())
            {
                cout << "Serving: " << customers.front() << endl;
                customers.pop();
            }
            else
            {
                cout << "No customers waiting.\n";
            }
            break;

        case 3:
            if (!customers.empty())
                cout << "Next customer: "
                     << customers.front() << endl;
            else
                cout << "Queue is empty.\n";
            break;

        case 4:
            cout << "Exiting system.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
