#include<iostream>
#include<cstring>
using namespace std;

// function to reverse string by recursion 

void reverse(char str[], int start, int end){
    // if start becomes greater than end and crosses the number of char
    // no character needs to be swapped
    if (start >= end)
        return;
    
    // swapping
    char temp;
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    //recurive calling 
    reverse(str, start + 1, end - 1);
}

int main (){
    char str[100];
    
    cout << "Enter a String : ";
    cin >> str;

    int n = strlen(str);
    
    cout << " String Before reversing :  " << str;

    // funtion call
    reverse(str, 0 , n-1);
    
    cout << "String After reversing  :  " << str;

    return 0;
}
