#include<iostream>

using namespace std;

//in this method element at first index is assigned as smallest 
//a loop is run if any element smaller than that of the index at that point 
//swap the finded smallest element with the assigned min value element 

void selection_sort(int arr[],int n){
    for(int i=0;i<n-2;i++)
    {
        int current= arr[i];
        int min_pos=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_pos])
            {
                min_pos=j;
            }
        }
        swap(arr[min_pos],arr[i]);
    }
}

int main(){
    int arr[]={1,3,2,45,7,5,4,3,5,6};
    int n=sizeof(arr)/sizeof(int);

    selection_sort(arr,n);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}