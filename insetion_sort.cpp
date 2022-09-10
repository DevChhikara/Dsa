#include<iostream>

using namespace std;

//insertion sort can be compared to as playing of cards 

void insertion_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 and arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=current;
    }
}


int main(){
    int arr[]={1,3,2,45,7,5,4,3,5,6};
    int n=sizeof(arr)/sizeof(int);

    insertion_sort(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<< arr[i]<<",";
    }

    return 0;
}