#include <iostream>
using namespace std;

// Function to calculate factorial 

int factorial (int n){
    int fac = 1;
    for (int i = 1 ; i <= n ; i++){
        fac = fac * i ;
    }
    return fac;

}

int main (){
    int num;

    cout << "Enter number for series :  ";
    cin >> num;

    // series printing
    for (int i = 1; i <= num ; i++){
        // function call
        cout << factorial(i) << "  ";
    }

    return 0;
}