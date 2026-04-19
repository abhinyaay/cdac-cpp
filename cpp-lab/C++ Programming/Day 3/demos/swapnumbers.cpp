#include<iostream>
using namespace std;
void swapusingpointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapusingreferencevar(int &a,int &b){
   int temp=a;
   a=b;
   b=temp;

}
//int &a=x
//int &b=y

//int *a=&x
//int *b=&y
int main(){
  int x=20;
  int y=30;
  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  swapusingpointer(&x,&y);
 // swapusingreferencevar(x,y); 
  cout<<"After swapping"<<endl;
  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  return 0;
}
