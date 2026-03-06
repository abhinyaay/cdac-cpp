#include <iostream>
using namespace std;

// function to check odd or even 
void check (int num){
    if ( num % 2 == 0)
        cout << "Given number is EVEN";
    else
        cout << "Given number is ODD";
}

int main(){
    int num;
    cout << "Enter a number to check : " << endl;
    cin >> num;
    // function call
    check(num);
    return 0;
}