#include<iostream>

using namespace std;

//this is how to operate with an 2d array 
//basic functions and intialising 

void printarray(int arr[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[100][100];
    int n,m;
    cout<<"give rows and columns";
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
      printarray(arr,n,m);

      return 0;
}