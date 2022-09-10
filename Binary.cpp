#include<iostream>

//in this the array is 1st sorted if not 
//than the middle elemnet is checked if the value asked is middle than cout
//if the value asked is less than middle than the  left side is treated as new array and same above step is repeated 
//if the asked value is greater than the middle than step 1 is repeated for the right side array 

using namespace std;
int binarysearch(int arr[],int n,int key){
    int l=0;
    int r=n-1;
    while(r>=l){
        int mid = (l+r)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key"<<endl;
    cin>>key;

    int index=binarysearch(arr,n,key);

    if(index!=-1){
        cout<<key<<" is present at index "<< index <<endl;
    }
    else{
        cout<<"element is not present";
    }
    return 0;
}