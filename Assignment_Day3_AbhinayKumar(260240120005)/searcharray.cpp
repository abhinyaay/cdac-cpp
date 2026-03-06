#include<iostream>
using namespace std;

// funtion to search and display the count 
int searchArray(char arr[], int size, char target){
    int count = 0;
    for (int i = 0 ; i < size ; i++){
        if (arr[i] == target){
            count++;
        }
    }
    return count;
}

// funtion to diplay the array
void displayArray(char arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    
}

int main(){
    int n , count;
    char ch;
    cout << "Enter the size of array : ";
    cin >> n;

    char arr[n];
    cout << "Enter  " << n << " character element in array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // funtion call ;
    displayArray(arr,n);
    cout << endl;
    cout << "Enter the char to search in the array : ";
    cin >> ch;
    count = searchArray(arr , n , ch);
    cout << ch << " apperared " << count << " times in the array " << endl;
    return 0;
    
}