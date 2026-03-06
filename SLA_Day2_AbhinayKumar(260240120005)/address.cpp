#include<iostream>
#include<cstring>
#include "address.h"
using namespace std;

// default Constructor
Address::Address()
{
    houseNo = 0;
    colony = "";
    area = "";
    city = "";
    pincode = 0;
}

// parameterized Constructor
Address::Address(int h, string c, string a, string ci, int p)
{
    houseNo = h;
    colony = c;
    area = a;
    city = ci;
    pincode = p;
}

// accept Function
void Address::accept()
{
    cout << "Enter House Number: ";
    cin >> houseNo;

    cout << "Enter Colony: ";
    cin >> colony;

    cout << "Enter Area: ";
    cin >> area;

    cout << "Enter City: ";
    cin >> city;

    cout << "Enter Pincode: ";
    cin >> pincode;
}

// display Function
void Address::display() const
{
    cout << "House No: " << houseNo << endl;
    cout << "Colony: " << colony << endl;
    cout << "Area: " << area << endl;
    cout << "City: " << city << endl;
    cout << "Pincode: " << pincode << endl;
}

// function to check if addresses are same
bool Address::isSame(Address a)
{
    if (houseNo == a.houseNo &&
        colony == a.colony &&
        area == a.area &&
        city == a.city &&
        pincode == a.pincode)
        return true;
    else
        return false;
}

// operator Overloading ==
bool Address::operator==(Address a)
{
    return (houseNo == a.houseNo &&
            colony == a.colony &&
            area == a.area &&
            city == a.city &&
            pincode == a.pincode);
}
