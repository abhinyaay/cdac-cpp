#include<iostream>
using namespace std;

// funtion to sort array 
void sortArray(int arr[], int size){
    int temp;
    for (int i = 0 ; i<size ; i++){
        for (int j = i+1 ; j < size ; j++){
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main(){
    int n;
    cout << "Enter the number of element : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    sortArray(arr,n);
    cout << "MAX value : " <<  arr[n-1] << endl;
    cout << "MIN value : " <<  arr[0] << endl;
    cout << "SECOND MAX value : " <<  arr[n-2] << endl;
    cout << "SECOND MIN value : " <<  arr[1] << endl;
    return 0;
}