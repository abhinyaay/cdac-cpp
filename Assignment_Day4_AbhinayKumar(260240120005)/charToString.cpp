#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of characters : ";
    cin >> n;

    // dynamic memory allocation 
    // n+1 for \O stores in last at the string 
    char *str = new char [n+1];

    cout << "Enter characters : ";
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }

    str[n] = '\0';

    cout << "String is : " << str << endl;

    // free memory 
    delete[] str;
    return 0;
}