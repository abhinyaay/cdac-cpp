#include <iostream>
using namespace std;

int powercal(int base, int expo){
    int num = 1;
    for( int i=0; i<expo ; i++ ){
        num = num * base;
    }
    return num;
}

int main(){
    int base , expo, result;
    cout << "Enter BASE : ";
    cin >> base;
    cout << "Enter EXPONENT : ";
    cin >> expo;
    result = powercal(base, expo);

    cout << " RESULT is " << result;
    return 0;
}