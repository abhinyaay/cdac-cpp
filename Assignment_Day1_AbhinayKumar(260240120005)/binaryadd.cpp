#include<iostream>
using namespace std;

int powercal(int base, int expo){
    int num = 1;
    for( int i=0; i<expo ; i++ ){
        num = num * base;
    }
    return num;
}
// funtion to convert binary to decimal
int binaryToDecimal(int binary_num){
    int decimal, digit, power;
    decimal = 0;
    power = 0;
    while (binary_num > 0){
        digit = binary_num % 10;
        decimal = decimal + (digit * powercal(2, power));
        power++;
        binary_num = binary_num / 10;
    }
    return decimal;
}

int decimalToBinary(int num){
    int remainder, place, binary;
    place = 1;
    binary = 0;
    while (num > 0){
        remainder = num % 2;
        binary = binary + remainder * place;
        num = num / 2;
        place = place * 10;
    }

    return binary;
}

int main (){
    int num1, num2, deci1, deci2, result;

    cout << "Enter the BINARY number 1 : ";
    cin >> num1;
    cout << "Enter the BINARY number 2 : ";
    cin >> num2;

    deci1 = binaryToDecimal(num1); // converting binary to decimal
    deci2 = binaryToDecimal(num2); // converting binary to decimal

    result = deci1 + deci2;

    result = decimalToBinary(result);

    cout << "Addition of " << num1 << " and " << num2 << " is : " << result;
    return 0;
}