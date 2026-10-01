// 4.	WAP for printing all odd numbers from 1 to 20.

#include <iostream>
using namespace std;

void oddNumbers(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}

int main(){
    oddNumbers();
    return 0;
}   