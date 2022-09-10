#include<iostream>
using namespace std;

//to print an subarray for a given array 

int sumsubarray(int arr[],int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=i;k<=j;k++){
        
        cout<< arr[k]<<",";
      }
      cout<<endl;
    }
   }
   
   return 0;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);

    int sum=sumsubarray(arr,n);
    cout<< sum <<endl;
}