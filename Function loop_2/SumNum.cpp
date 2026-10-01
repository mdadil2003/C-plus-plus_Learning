// 5.	WAP for adding all numbers from 1 to 20.

#include <iostream>
using namespace std;

void sumNumbers(){
    int sum = 0;

    for(int i = 1; i <= 20; i++)
        sum += i;

    cout << sum;
}

int main(){
    sumNumbers();
    return 0;
}