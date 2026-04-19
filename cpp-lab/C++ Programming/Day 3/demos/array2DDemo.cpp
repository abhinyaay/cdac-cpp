#include<iostream>
using namespace std;
void acceptdata(int arr[3][3],int rows,int cols){
   for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
         cout<<"enter data for row "<<i<<"column "<<j;
	 cin>>arr[i][j];
	 cout<<endl;
      }
   }

}

void displaydata(int arr[3][3],int rows,int cols){
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
         cout<<arr[i][j]<<"\t";
      }
      cout<<endl;
    }

}

int adddata(int arr[3][3],int rows,int cols){
    int sum=0;
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
         sum+=arr[i][j];
      }
    }
    return sum;
}


int main(){
        const int rows=3,cols=3;
	int arr[rows][cols];
	acceptdata(arr,rows,cols);
	displaydata(arr,rows,cols);
	cout<<"addition: "<<adddata(arr,rows,cols);
	return 0;

}
