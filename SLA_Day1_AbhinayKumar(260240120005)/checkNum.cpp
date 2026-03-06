#include <iostream>
using namespace std;

// Function to check Prime
void checkPrime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        cout << "Number is Prime\n";
    else
        cout << "Number is Not Prime\n";
}

// Function to check Odd or Even
void checkOddEven(int n)
{
    if(n % 2 == 0)
        cout << "Number is Even\n";
    else
        cout << "Number is Odd\n";
}

// Function to check Positive or Negative
void checkSign(int n)
{
    if(n > 0)
        cout << "Number is Positive\n";
    else if(n < 0)
        cout << "Number is Negative\n";
    else
        cout << "Number is Zero\n";
}

int main()
{
    int num, choice;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        cout << "\nMENU\n";
        cout << "1. Prime Number or Not\n";
        cout << "2. Odd or Even\n";
        cout << "3. Positive or Negative\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                checkPrime(num);
                break;

            case 2:
                checkOddEven(num);
                break;

            case 3:
                checkSign(num);
                break;

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    }while(choice != 4);

    return 0;
}