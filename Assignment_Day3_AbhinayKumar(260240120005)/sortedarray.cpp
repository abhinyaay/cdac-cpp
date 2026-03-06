#include <iostream>
using namespace std;

// function to sort array
void sortArray(int arr[],int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }   
        }   
    }
}

// funtion to print array 
void displayArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}


int main (){
    int n;
    cout << "Enter the size of array : " ;
    cin >> n;

    int arr[n];
    // to take input of the element in array 
    cout << "Enter " << n << " element in array : ";
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // funtion call
    displayArray(arr,n);
    cout << endl;
    sortArray(arr,n);
    displayArray(arr,n);

    return 0;
}