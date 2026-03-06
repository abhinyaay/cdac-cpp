#include "address.h"
using namespace std;

int main()
{
    Address a1, a2;

    cout << "Enter First Address:\n";
    a1.accept();

    cout << "\nEnter Second Address:\n";
    a2.accept();

    cout << "\nFirst Address:\n";
    a1.display();

    cout << "\nSecond Address:\n";
    a2.display();

    // Using function
    if(a1.isSame(a2))
        cout << "\nAddresses are SAME\n";
    else
        cout << "\nAddresses are DIFFERENT\n";

    // Using overloaded operator
    if(a1 == a2)
        cout << "\n(Using ==) Addresses are SAME\n";
    else
        cout << "\n(Using ==) Addresses are DIFFERENT\n";

    return 0;
}