#include<iostream>
using namespace std;

// function to find average 
float findAvg(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n ; i++){
        sum = sum + arr[i];
    }

    return float(sum) / n;
}

int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter number : ";
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    float avg = findAvg(arr,n);

    cout << "Average  = " << avg << endl;
    return 0 ;
}