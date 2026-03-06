#include<iostream>
using namespace std;

// function to multiply each number by 2

void mulbytwo(int arr[], int size){
    for (int i = 0; i<size ; i++){
        arr[i] = arr[i]*2;
    }
}

// function to display 

void displayArr(int arr[], int size){
    for (int i = 0 ; i <size ; i++){
        cout << arr[i] <<"  ";
    }
}

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter number: ";
    for (int i=0; i < n ; i++){
        cin >> arr[i];
    }
    displayArr(arr,n);
    mulbytwo(arr,n);
    cout << endl;
    displayArr(arr,n);


    return 0;
}