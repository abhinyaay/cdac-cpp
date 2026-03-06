#include<iostream>
using namespace std;

// function to sort array 
void sortArray(int *arr, int size){
    int temp;
    for (int i = 0 ; i < size ; i++){
        for (int j=i+1 ; j < size ; j++ ){
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// function to display array
void dispayArray(int *arr, int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << "  ";
    }
}

int main (){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter numbers: "<<endl;
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    // function call
    dispayArray(arr,n);
    cout<<endl;
    sortArray(arr,n);
    dispayArray(arr,n);

    delete[]arr;

    return 0;
}