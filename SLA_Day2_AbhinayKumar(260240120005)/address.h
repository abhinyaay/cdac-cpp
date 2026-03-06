#include <iostream>
using namespace std;

class Address
{
private:
    int houseNo;
    string colony;
    string area;
    string city;
    int pincode;

public:
    // default Constructor
    Address();

    // parameterized Constructor
    Address(int, string, string, string, int);

    // accept Function
    void accept();

    // display Function
    void display() const;

    // function to compare addresses
    bool isSame(Address);

    // overloaded == operator
    bool operator==(Address);
};