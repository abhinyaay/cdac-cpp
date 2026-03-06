#include<iostream>
using namespace std;
// function to find roots
void rootofequation (int a, int b , int c){
    double discriminant, root1, root2, real, imaginary;

    discriminant = b*b - 4*a*c;
    // two different roots when discriminant > 0
    if (discriminant > 0 ){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real and different" << endl;
        cout << "Root 1 = "<<root1 << endl;
        cout << "Root 2 = "<<root2 << endl;
    }
    // equal roots(Same)
    else if (discriminant == 0){
        root1 = -b / (2*a);
        cout << "Roots are real and equal " << endl;
        cout << "Root1 = "<<root1 << endl;
        cout << "Root2 = "<<root2 << endl;
    }
    // complex(imaginary roots)
    else{
        real = -b /(2*a);
        imaginary = sqrt(-discriminant) / (2*a) ;

        cout << "Roots are complex" << endl;
        cout << "Root1 = " << real << " + " << imaginary << "i" <<endl;
        cout << "Root2 = " << real << " - " << imaginary << "i" <<endl;
    }

}

int main (){

    int a,b,c;
    cout << "Enter coefficients a,b,c for equation (ax^2 + bx + c) : " ;
    cin >> a >> b >> c;
    // function calling 
    rootofequation( a, b, c);

    return 0;
}