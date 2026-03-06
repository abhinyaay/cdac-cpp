#include<iostream>
using namespace std;

// function to calculate area
int areaRectangle(int length, int breadth){
    return length * breadth;
}

int main(){
    int length, breadth, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = areaRectangle(length, breadth);

    cout << "Area of rectangle = " << area;

    return 0;
}