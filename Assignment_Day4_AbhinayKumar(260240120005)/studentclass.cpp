#include<iostream>
using namespace std;

// Student class function 
class Student
{
    public:
        int rollNum;
        string name;
        int age;
        int marks;

    // function to accept data

    void accept ()
    {
        cout << "Roll Number : ";
        cin >> rollNum;

        cout << "Name : ";
        cin >> name;
        
        cout << "Age : ";
        cin >> age;
        
        cout << "Marks : ";
        cin >> marks;
    }

    // function to display data
    void display ()
    {
        cout << "Roll Number :  " << rollNum << endl;
        cout << "Name :  " << name << endl;
        cout << "Age :  " << age << endl;
        cout << "Marks :  " << marks << endl;
    }
        
};


int main (){
    int n;
    cout << "Enter the number of student : ";
    cin >> n;

    Student* s = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i+1 << endl;
        s[i].accept();
    }

    cout << "Student Details"<<endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Student " << i+1 << endl;
        s[i].display();
    }


    delete[]s; // freeing memory
    return 0;
}