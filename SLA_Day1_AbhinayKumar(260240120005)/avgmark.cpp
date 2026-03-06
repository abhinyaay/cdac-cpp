#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    int count = 0;

    cout << "Enter 5 marks (0-100):\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum += marks[i];

        if(marks[i] < 65)
        {
            count++;
        }
    }

    float average = sum / 5.0;

    cout << "\nAverage Marks = " << average << endl;
    cout << "Number of marks less than 65 = " << count << endl;

    return 0;
}