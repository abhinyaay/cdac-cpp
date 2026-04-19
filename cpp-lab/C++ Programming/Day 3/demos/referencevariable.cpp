#include<iostream>
using namespace std;

int main(){
  int x=20;
  int& y=x;
  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  x=30;
  cout<<"After changing"<<endl;
  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  return 0;
}
