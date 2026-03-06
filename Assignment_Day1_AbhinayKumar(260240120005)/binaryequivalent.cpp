#include <iostream>
using namespace std;

// recursive function
void decimalToBinary(int n) {
    if(n == 0)
        return;

    decimalToBinary(n / 2);   // recursive call
    cout << n % 2;            // print remainder
}

int main() {
    int num;

    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary equivalent: ";
    decimalToBinary(num);

    return 0;
}