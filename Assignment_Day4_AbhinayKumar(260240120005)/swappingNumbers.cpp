#include<iostream>
using namespace std;

// function to swap numbers using call by reference
void swapNum(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main (){
    int num1, num2;
    cout << "Enter 2 numbers : ";
    cin >> num1 >> num2;

    cout << "Before swapping : " << num1 << "  " << num2 << endl;
    // function call by reference
    swapNum(num1 , num2);
    cout << "After swapping : " << num1 << "  " << num2 << endl;
    return 0;
}