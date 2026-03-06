#include <iostream>
using namespace std;

// function to find power
float power(float base, int exp)
{
    float result = 1;

    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    float principal, rate, time;
    float SI, CI;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (years): ";
    cin >> time;

    // Simple Interest
    SI = (principal * rate * time) / 100;

    // Compound Interest using power function
    CI = principal * power((1 + rate/100), time) - principal;

    cout << "\nSimple Interest = " << SI << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}