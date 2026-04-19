#include<iostream>
using namespace std;

int main(){
   const int size=5;
   int arr[]={10,20,34,12,45};
   int arr1[size];
   for(int i=0;i<size;i++){
     cout<<"enter data"<<endl;
     cin>>arr1[i];
   }

   for(int i=0;i<size;i++){
       cout<<arr1[i]<<", ";
   }



}
