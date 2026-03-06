#include<iostream>
using namespace std;

// function to calculate sum of digits
int sumOfDigits(int num){
    int digit, sum = 0;

    while(num > 0){
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    }

    return sum;
}

int main(){
    int number, result;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    result = sumOfDigits(number);

    cout << "Sum of digits = " << result;

    return 0;
}