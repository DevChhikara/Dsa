#include<iostream>

using namespace std;

//best way as we are given that array is sorted in both ways horizontal nad vertical 
//the element with the index last column firsr row will be selected 
//now as we know down the group the value increases and left it will decrease 
//using this the code will be as follow ->

pair<int,int> staircase_search(int arr[][10],int n,int m,int key)
{
    if(key<arr[0][0] or key>arr[n-1][m-1] )
    {
        return{-1,-1};
    }
    int i=0;
    int j=m-1;
    while(i<=n-1 and j>=0)
    {
        if(arr[i][j]==key)
        {
            return{i,j};
        }
        else if(arr[i][j]>key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return{-1,-1};
}

int main()
{
    int arr[][10]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

int n=4;
int m=4;
int key;
cout<<"enter key"<<endl;
cin>>key;
pair<int,int> ans=staircase_search(arr,n,m,key);
cout<<ans.first<<" "<<ans.second<<endl;
return 0;

}