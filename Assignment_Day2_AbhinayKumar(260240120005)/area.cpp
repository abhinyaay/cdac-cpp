#include<iostream>
using namespace std;

// Funtion to calcualte area of RECTANGLE 
int areaRectangle (int len, int breadth){
    return len * breadth;
}
// Funtion to calcualte area of SQUARE 
int areaSquare (int side){
    return side * side;
}
// Funtion to calcualte area of CIRCLE 
double areaCircle (int radius){
    return 3.14 * radius * radius;
}

int main (){
    int len, breadth, side, radius;

    cout << "Enter length and breadth for RECTANGLE : " << endl;
    cin >> len >> breadth;

    cout << "Enter side of SQUARE : " << endl;
    cin >> side;

    cout << "Enter radius of CIRCLE : " << endl;
    cin >> radius;

    // Function call
    cout << "AREA OF RECTANGLE : " << areaRectangle(len, breadth) << endl << endl;
    cout << "AREA OF SQUARE : " << areaSquare(side) << endl << endl;
    cout << "AREA OF CIRCLE : " << areaCircle(radius) << endl << endl;

    return 0;
}