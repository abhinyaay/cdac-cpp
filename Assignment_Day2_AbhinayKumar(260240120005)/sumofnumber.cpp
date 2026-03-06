#include<iostream>
using namespace std;

// recursive function to add sum of n numbers
int sumofnumber(int n){
    // base case
    if (n == 0)
        return 0;
    // recursive call 
    else
        return n + sumofnumber(n - 1);
}

int main(){
    int n , sum;
    cout << "Enter a number : ";
    cin >> n;
    sum = sumofnumber(n);
    cout << "Sum of " << n << "Number is = " << sum <<endl;
    return 0;
}