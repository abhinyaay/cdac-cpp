#include "payslip.h"

// default Constructor
Payslip::Payslip()
{
    empNo = 0;
    empName = "";
    DA = 0;
    HRA = 0;
    basicSalary = 0;
}

// parameterized Constructor
Payslip::Payslip(int no, string name, float da, float hra, float basic)
{
    empNo = no;
    empName = name;
    DA = da;
    HRA = hra;
    basicSalary = basic;
}

// accept Function
void Payslip::accept()
{
    cout << "Enter Employee No: ";
    cin >> empNo;

    cout << "Enter Employee Name: ";
    cin >> empName;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter DA: ";
    cin >> DA;

    cout << "Enter HRA: ";
    cin >> HRA;
}

// calculate Salary
float Payslip::calculateSalary()
{
    return basicSalary + DA + HRA;
}

// display Function
void Payslip::display()
{
    cout << "Employee No: " << empNo << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "DA: " << DA << endl;
    cout << "HRA: " << HRA << endl;
    cout << "Total Salary: " << calculateSalary() << endl;
}