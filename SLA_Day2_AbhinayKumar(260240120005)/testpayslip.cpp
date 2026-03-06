#include "payslip.h"

int main()
{
    Payslip p1;

    cout << "Enter Employee Details\n";
    p1.accept();

    cout << "\nEmployee Payslip\n";
    p1.display();

    return 0;
}