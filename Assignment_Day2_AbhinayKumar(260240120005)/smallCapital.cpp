#include<iostream>
using namespace std;

// function to check the character is small or capital 
void check(char c){
    if (c >= 'A' && c <= 'Z')
        cout << "Entered charachter is CAPITAL LETTER " << endl;
    else if ( c >= 'a' && c <= 'z')
        cout << "Entered charachter is SMALL LETTER " << endl;
    else
        cout << "not an alphabet" ;
}

int main (){
    char c;
    cout << "Enter a charachter : ";
    cin >> c;

    // funtion call
    check(c);
    return 0;
}