#include<iostream>
using namespace std;

// funtion to multiply number by 2
void mulArray(int arr[], int size){
    for(int i = 0; i<size ; i++){
        arr[i] = arr[i] * 2;
    }
}

// funtion to display array
void displayArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter number of elements " ;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array : ";
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    // function call 
    cout << "Normal array : " << endl;
    displayArray(arr,n);
    cout << "Array after Multiplying by 2 : " << endl;
    mulArray(arr,n);
    displayArray(arr,n);
    return 0;
}