#include<iostream>
using namespace std;

// Function to find average
int averageArray (int arr[], int size)
{
    int sum = 0;
    int avg;
    for(int i = 0 ; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    return avg;
}

int main ()
{
    int n , avg;
    cout << "Enter the size of array : " ;
    cin >> n;
    
    int arr[n];
    cout << "Enter the element in array : ";
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    avg = averageArray(arr , n);
    cout << "Average of the array is : " << avg;

    return 0;
}