#include<iostream>

using namespace std;

bool CanPlace(int board[][20],int n,int x,int y){
    //column check
    for(int k=0;k<=x;k++){
        if(board[k][y]==1)
        return false;
    }
    //left diagnol
    int i=x;
    int j=y;
    while(i>=0 and j>=0){
        if(board[i][j]==1){
            return false;
          
        }
          i--;j--;
    }
    //right diagnol
    i=x;
    j=y;
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
          
        }
          i--;j++;
    }
    return true;
}

void printPlace(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //print board
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNqueen(int board[][20],int n,int i){
    //base case 
    if(i==n){
    printPlace(board,n);
    return true;
    }
    //recursive case
    //try to place queen in every row 
    for(int j=0;j<n;j++){
        if(CanPlace(board,n,i,j)){
            //place 1 where queen is placed check for constraint if true return that if not backtrack it 0 again check next column
            board[i][j]=1;
            bool success=solveNqueen(board,n,i+1);
            if(success){
                return true;
            }
            //backtrack
            board[i][j]=0;
        }
    }
    return false;
}

int main()
{
    int board[20][20]={0};
    int n;
    cout<<"enter value-";
    cin>>n;
    solveNqueen(board,n,0);
    

    return 0;
}