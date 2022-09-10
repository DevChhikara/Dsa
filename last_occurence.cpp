#include<iostream>
using namespace std;

int last_occurence(int arr[],int n,int key)
{
   if(n==0)
   {
    return -1;
   }
   int subindex=last_occurence(arr+1,n-1,key);
   if(subindex==-1){
    if(arr[0]==key){
        return 0;
    }
    else{
        return -1;
    }
   }
   else{
    return subindex+1;
   }
}

int main()
{
    int arr[]={12,3,4,1,6,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    cout<<last_occurence(arr,n,key)<<endl;
    return 0;
}