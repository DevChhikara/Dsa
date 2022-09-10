#include<iostream>

//for an 2d array 1st we will allocate memory for number of rows 
//store the address of the pointer in an array of pointers **
//than for the number of rows allocate another memory for coloums 


using namespace std;
int** create_2d_array(int rows,int cols)
{
       int **arr=new int*[rows];
      for(int i=0;i<rows;i++)
      {
         arr[i]=new int[cols];
      }

      int values=0;
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
            arr[i][j]=values;
            values++;
        }
      }
      return arr;
}

int main()
{
        int rows,cols;
        cout<<"give input";
        cin>>rows>>cols;

        int **arr=create_2d_array(rows,cols);
        for(int i=0;i<rows;i++)
      {
        for(int j=0;j<cols;j++)
        {
           cout<<arr[i][j]<<" ";
        }
          cout<<endl;
      }
    return 0;
}