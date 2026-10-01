// 8. WAP for printing multiplication table of a number. For eg. Display should be “ 2 X 1 = 2”

#include <iostream>
using namespace std;

void table(int num){
    for(int i = 1; i <= 10; i++){
        cout << num << " X " << i << " = " << num * i << endl;
    }
}
int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    table(n);

    return 0;
}