#include<iostream>
using namespace std;

// funtion to print factorila using recursion 
int factorial (int n){
    // base condition 
    if( n==0 || n==1){
        return 1;
    }
    // recursive call
    else {
        return n * factorial(n-1);
    }
}

int main (){
    int n;
    cout << "Enter a numer to find the factorial : ";
    cin >> n;

    // function calling and printing the value
    cout << "Factorial of " << n << " is :  " <<factorial(n);
    return 0;
}