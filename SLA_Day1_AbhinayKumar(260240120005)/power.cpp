#include <iostream>
using namespace std;

// Function with default argument
double power(double n, int p = 2)
{
    double result = 1;

    for(int i = 1; i <= p; i++)
    {
        result = result * n;
    }

    return result;
}

int main()
{
    double n;
    int p;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter power (enter 0 to use default square): ";
    cin >> p;

    if(p == 0)
        cout << "Result = " << power(n) << endl;
    else
        cout << "Result = " << power(n, p) << endl;

    return 0;
}