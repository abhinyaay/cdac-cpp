#include<iostream>
using namespace std;

void printArray(string student[] , int size) {
    cout << "Student array : ";
    for (int i = 0 ; i < size ; i++){
        cout << student[i] << "  ";
    }
}


int main (){

    int size;
    cout<< "Enter the size of student array  : ";
    cin >> size;

    string student[size];

    cout << "Enter " << size << "  student names : ";
    for (int i = 0 ; i<size; i++){
        cin >> student[i];
    }
   
    // function call
    printArray(student, size);

    return 0;
}

 // Pawan Varun Prashant Ankit Abhishek