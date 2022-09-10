#include<iostream>
using namespace std;

//make a for loop to traverse in the array
//check every index if element is present at that index than cout its index
//it takes order of N time s

int linearsearch(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           return i;
        }
    }
    return -1;
}

int main(){
int arr[]={1,2,3,4,56,6,7,8,9,10};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"enter target value"<<endl;
int m;
cin>>m;
int index=linearsearch(arr,n,m);
if(index!=-1){
    cout<<"element is present at index"<<"-"<<index<<endl;
}
    else(cout<<"not found");

   return 0;
}