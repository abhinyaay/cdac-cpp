#include <iostream>
using namespace std;

// swapping function 
void swapNumbers(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapNumbers(x, y);

    cout << "After swapping: " << x << " " << y;

    return 0;
}