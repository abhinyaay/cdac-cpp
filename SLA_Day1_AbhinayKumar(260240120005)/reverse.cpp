#include <iostream>
#include <string>
using namespace std;

// Function to reverse string
string reverseStr(string str)
{
    string rev = "";

    for(int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    return rev;
}

int main()
{
    string line;

    cout << "Enter a line: ";
    getline(cin, line);

    cout << "Reversed line: " << reverseStr(line);

    return 0;
}