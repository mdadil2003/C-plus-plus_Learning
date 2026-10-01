// 6.	WAP for finding sum of all even numbers till 20.

#include <iostream>
using namespace std;

void sumEven(){
    int sum = 0;
    for(int i = 2; i <= 20; i += 2)
        sum += i;
    cout << sum;
}
int main(){
    sumEven();
    return 0;
}