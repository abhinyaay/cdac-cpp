#include <iostream>
using namespace std;

int main()
{
    float operand1, operand2, result;
    char op;

    cout << "Enter operand 1: ";
    cin >> operand1;

    cout << "Enter operand 2: ";
    cin >> operand2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            result = operand1 + operand2;
            break;

        case '-':
            result = operand1 - operand2;
            break;

        case '*':
            result = operand1 * operand2;
            break;

        case '/':
            if(operand2 != 0)
                result = operand1 / operand2;
            else
            {
                cout << "Division by zero not allowed";
                return 0;
            }
            break;

        default:
            cout << "Invalid operator";
            return 0;
    }

    cout << "The result of " << operand1 << op << operand2 << " is " << result;

    return 0;
}