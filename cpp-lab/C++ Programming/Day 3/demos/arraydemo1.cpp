#include<iostream>
using namespace std;
void acceptdata( int *arr,int n){
   for(int i=0;i<n;i++){
      cout<<"enter data";
      cin>>arr[i];
   }
}

int sumofarray(int *arr,int size){
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

void displaydata(int *arr,int n){
    for(int i=0;i<n;i++){
       cout<<arr[i]<<", ";
    }

}
int searcharray(int *arr, int size, int num){
	for(int i =0; i<size;i++){
	if(arr[i] == num) 
		return i;
	}
	return -1;

}

//delete the given number if found and return true
//else return false
bool deletedata(int *arr,int size,int num){
   int pos;
   pos=searcharray(arr,size,num);
   if(pos==-1)
	   return false;
   //to shift data 1 location to left
   for(int i=pos;i<size-1;i++){
       arr[i]=arr[i+1];
   }
}

int main(){
   const int size=5;
   int arr[size];
   int num;
   bool status;
   acceptdata(arr,size);
   displaydata(arr,size);
   cout<<sumofarray(arr,size);
   cout<<"enter number to search"<<endl;
   cin>>num;
   cout<<searcharray(arr,size,num)<<endl;
   cout<<"enetr data to delete"<<endl;
   cin>>num;
   status=deletedata(arr,size,num);
   return 0;
}
