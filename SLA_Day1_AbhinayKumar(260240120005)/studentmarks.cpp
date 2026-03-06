#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int mark1, mark2, mark3;

public:
    // Function to get data
    void getdata()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks of Subject 1: ";
        cin >> mark1;

        cout << "Enter Marks of Subject 2: ";
        cin >> mark2;

        cout << "Enter Marks of Subject 3: ";
        cin >> mark3;
    }

    // Function to display result
    void result()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: " << mark1 << " " << mark2 << " " << mark3 << endl;

        if(mark1 >= 50 && mark2 >= 50 && mark3 >= 50)
            cout << "Result: PASS\n";
        else
            cout << "Result: FAIL\n";
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];   // array of objects

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i+1 << endl;
        s[i].getdata();
    }

    cout << "\n--- Results ---\n";

    for(int i = 0; i < n; i++)
    {
        s[i].result();
    }

    return 0;
}