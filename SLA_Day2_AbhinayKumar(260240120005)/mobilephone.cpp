#include "mobilephone.h"

// default constructor
MobilePhone::MobilePhone()
{
    modelNo = "";
    price = 0;
    manufacturer = "";
    quantity = 0;
}

// parameterized constructor
MobilePhone::MobilePhone(string m, float p, string manu, int q)
{
    modelNo = m;
    price = p;
    manufacturer = manu;
    quantity = q;
}

// accept function
void MobilePhone::accept()
{
    cout << "Enter Model No: ";
    cin >> modelNo;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Manufacturer: ";
    cin >> manufacturer;

    cout << "Enter Quantity: ";
    cin >> quantity;
}

// display function
void MobilePhone::display()
{
    cout << "Model No: " << modelNo << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Quantity: " << quantity << endl;
}

// search model
bool MobilePhone::searchModel(string m)
{
    return modelNo == m;
}

string MobilePhone::getModel()
{
    return modelNo;
}

int MobilePhone::getQuantity()
{
    return quantity;
}