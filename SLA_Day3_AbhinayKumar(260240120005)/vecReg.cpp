#include <iostream>
#include <fstream>
using namespace std;

// Template function to check year
template <class T>
bool checkYear(T y)
{
    if (y >= 2000 && y <= 2025)
        return true;
    else
        return false;
}

// Base Class
class Vehicle
{
protected:
    string regNo, model, manufacturer;
    int year;

public:
    static int count;

    Vehicle(string r, string m, string manu, int y)
    {
        if (r == "")
            throw "Registration number cannot be empty";

        if (!checkYear(y))
            throw "Invalid year";

        regNo = r;
        model = m;
        manufacturer = manu;
        year = y;

        count++;
    }

    // inline function
    inline string basicInfo()
    {
        return "RegNo: " + regNo +
               ", Model: " + model +
               ", Manufacturer: " + manufacturer +
               ", Year: " + to_string(year);
    }

    virtual void displayInfo() = 0;
};

int Vehicle::count = 0;

// Car Class
class Car : public Vehicle
{
    string fuelType;

public:
    Car(string r, string m, string manu, int y, string fuel)
        : Vehicle(r, m, manu, y)
    {
        fuelType = fuel;
    }

    void displayInfo()
    {
        cout << basicInfo() << ", FuelType: " << fuelType << endl;
    }
};

// Bike Class
class Bike : public Vehicle
{
    string engineCap;

public:
    Bike(string r, string m, string manu, int y, string cap)
        : Vehicle(r, m, manu, y)
    {
        engineCap = cap;
    }

    void displayInfo()
    {
        cout << basicInfo() << ", EngineCapacity: " << engineCap << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of vehicles: ";
    cin >> n;

    Vehicle *v[10];

    ofstream file("vehicles.txt");

    try
    {
        for (int i = 0; i < n; i++)
        {
            char type;
            string reg, model, manu;
            int year;

            cout << "\nEnter type (C for Car, B for Bike): ";
            cin >> type;

            cout << "Enter Registration Number: ";
            cin >> reg;

            cout << "Enter Model Name: ";
            cin >> model;

            cout << "Enter Manufacturer: ";
            cin >> manu;

            cout << "Enter Year: ";
            cin >> year;

            if (type == 'C')
            {
                string fuel;
                cout << "Enter Fuel Type: ";
                cin >> fuel;

                v[i] = new Car(reg, model, manu, year, fuel);
            }
            else
            {
                string cap;
                cout << "Enter Engine Capacity: ";
                cin >> cap;

                v[i] = new Bike(reg, model, manu, year, cap);
            }

            v[i]->displayInfo();

            file << v[i]->basicInfo() << endl;
        }

        file.close();

        cout << "Records saved in file!! " << endl ;
        cout << "Total Vehicles stored: " << Vehicle::count << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}