#include<iostream>

using namespace std;

//in this the the array is arranged in order if not 
//in this 2 for loops run simuntaneously and 2 simualtaneous value are compared 
//if value at left index is bigger than its next one than swap those two values 
//it takes order of N^2 time 

int bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;

}

int main(){
    int arr[]={1,3,2,45,7,5,4,3,5,6};
    int arr1[]={5, 3, 1, 9, 8, 2, 4, 7};
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int n2=sizeof(arr2)/sizeof(int);
    int n=sizeof(arr)/sizeof(int);
    int n1=sizeof(arr1)/sizeof(int);
    bubble_sort(arr,n);
    bubble_sort(arr1,n1);
    bubble_sort(arr2,n2);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<",";
        
    }
    cout<<endl;
     for(int i=0;i<=n1-1;i++){
        cout<<arr1[i]<<",";
      
    }
      cout<<endl;
     for(int i=0;i<=n2-1;i++){
        cout<<arr2[i]<<",";
       
    }

    return 0;
}