// 2.	WAP for printing all natural numbers in reverse order starting from 20.

#include<iostream>
using namespace std;
void printNumber(){
    for(int i=20; i>=1; i--){
        cout<< i << " ";
    }
}
int main(){
    printNumber();
    return 0;
}