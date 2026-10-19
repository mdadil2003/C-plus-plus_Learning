// 2. A class Counter has a static member to keep track of the number of objects created. Demonstrate it by creating multiple objects.
#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    Counter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    static void displayCount() {
        cout << "Total number of objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4;

    Counter::displayCount();

    return 0;
}
 

