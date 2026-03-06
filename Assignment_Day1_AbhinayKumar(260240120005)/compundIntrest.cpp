#include<iostream>
using namespace std;


// power fnction
double powercal(double base, int expo){
    double num = 1;
    for(int i = 0; i < expo; i++){
        num = num * base;
    }
    return num;
}

int main (){
    int principal; 
    int time;
    float rate;
    double amount, compound_interest;

    cout << "Enter the PRINCIPAL : ";
    cin >> principal;

    cout << "Enter the RATE : ";
    cin >> rate;

    cout << "Enter the TIME (in years): ";
    cin >> time;

    amount = principal * powercal((1 + rate/100), time);

    compound_interest = amount - principal;

    cout << "COMPOUND INTEREST is : " << compound_interest;

    return 0;
}