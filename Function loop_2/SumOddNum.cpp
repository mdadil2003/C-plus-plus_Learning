// 7.	WAP for finding sum of all odd numbers till 20.

#include <iostream>
using namespace std;

void oddNumbers(){
    int sum=0;
    for(int i = 1; i <= 20; i++){
        if(i % 2 != 0){
            sum +=i;
        }
    }
    cout << sum;
}
int main(){
    oddNumbers();
    return 0;
} 