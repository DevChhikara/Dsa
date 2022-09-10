#include<iostream>

using namespace std;

//to print a matrix in a spiral form and then store result in an array 

void print_spiral(int arr[][10],int n,int m)
{
    int sr=0;
    int er=n-1;
    int sc=0;
    int ec=m-1;
     
     while(sc<=ec and sr<=er)
     {
        //sr
        for(int col=sc; col<=ec;col++)
        {
            cout<<arr[sr][col]<<" ";
        }
        //ec
        for(int row=sr+1; row<=er;row++)
        {
            cout<<arr[row][ec]<<" ";
        }
        //er
        for(int col=ec-1;col>=sc;col--)
        {
            if(sr==er)
            {
                break;
            }
            cout<<arr[er][col]<<" ";
        }
        //sc
        for(int row=er-1;row>=sr+1;row--)
        {
            if(sc==ec)
            {
                break;
            }
            cout<<arr[row][sc]<<" ";
        }
        sr++;
        er--;
        sc++;
        ec--;
     }
}

int main()
{
   int arr[][10]={{1,2,3,4},
                  {12,13,14,5},
                  {11,16,15,6},
                  {10,9,8,7}};
                
     int n=4,m=4;

     print_spiral(arr,n,m);

     return 0;
}