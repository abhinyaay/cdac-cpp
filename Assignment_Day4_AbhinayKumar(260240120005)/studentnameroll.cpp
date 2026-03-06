#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNum;
    string name;
};

// funtion to accept student data 
void Accept(Student s[], int n){
    for (int i = 0; i < n ; i++){
        cout << "Enter details : "<<endl;

        cout <<"Roll number : ";
        cin >> s[i].rollNum;
        cout <<"Name : ";
        cin >> s[i].name;
    }
}

// function to display student data 
void Display(Student s[], int n ){
    cout << "Student Details : "<< endl;

    for (int i = 0; i < n; i++){
        cout << "Student "<< i+1 << endl;
        cout << "Roll Number : " << s[i].rollNum << endl;
        cout << "Name : " << s[i].name << endl;
    }
}

int main(){
    int n;
    cout <<" Enter number of students : ";
    cin >> n;

    Student s[n];

    Accept(s,n);
    Display(s,n);

    return 0;
}