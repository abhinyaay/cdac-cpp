#include <iostream>
using namespace std;

class Payslip
{
private:
    int empNo;
    string empName;
    float DA;
    float HRA;
    float basicSalary;

public:
    // default Constructor
    Payslip();

    // parameterized Constructor
    Payslip(int, string, float, float, float);

    // accept Function
    void accept();

    // display Function
    void display();

    // function to calculate total salary
    float calculateSalary();
};
