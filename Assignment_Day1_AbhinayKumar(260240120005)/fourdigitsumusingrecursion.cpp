#include<iostream>
using namespace std;

// function for sum of digit
int sumOfDigits(int num){
    if(num == 0)
        return 0;

    return (num % 10) + sumOfDigits(num / 10);
}

int main(){
    int number, result;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    result = sumOfDigits(number);

    cout << "Sum of digits = " << result;

    return 0;
}