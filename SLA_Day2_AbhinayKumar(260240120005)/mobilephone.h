
#include <iostream>
using namespace std;

class MobilePhone
{
private:
    string modelNo;
    float price;
    string manufacturer;
    int quantity;

public:
    // default constructor
    MobilePhone();

    // parameterized constructor
    MobilePhone(string, float, string, int);

    // accept data
    void accept();

    // display data
    void display();

    // search model availability
    bool searchModel(string);

    // get functions
    string getModel();
    int getQuantity();
};
