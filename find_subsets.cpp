#include<iostream>
using namespace std;

void find_subsets(char *input,char* output,int i,int j){
//base case 
if(input[i]=='\0')
{
    output[j]='\0';
    cout<<output<<endl;
    return ;
}
// rec case
//here we have 2 cases include or not include 
// if included
output[j]=input[i];
find_subsets(input,output,i+1,j+1);

//if not included
find_subsets(input,output,i+1,j);
}

int main(){
    char input[100];
    char output[100];
    cout<<"give input";
    cin>>input;
    find_subsets(input,output,0,0);
    return 0;
}