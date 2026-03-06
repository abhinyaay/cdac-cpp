#include <iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float amount = 0, surcharge = 0, total;

    cout << "Enter User Name: ";
    cin >> name;

    cout << "Enter Units Consumed: ";
    cin >> units;

    // Calculate bill
    if(units <= 100)
    {
        amount = units * 5.5;
    }
    else if(units <= 300)
    {
        amount = (100 * 5.5) + ((units - 100) * 7.25);
    }
    else
    {
        amount = (100 * 5.5) + (200 * 7.25) + ((units - 300) * 8.75);
    }

    // Minimum charge
    if(amount < 60)
        amount = 60;

    // Surcharge
    if(amount > 750)
        surcharge = amount * 0.10;

    total = amount + surcharge;

    cout << "\nElectricity Bill\n";
    cout << "Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Amount: Rs. " << amount << endl;
    cout << "Surcharge: Rs. " << surcharge << endl;
    cout << "Total Bill: Rs. " << total << endl;

    return 0;
}