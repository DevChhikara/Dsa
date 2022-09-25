#include<iostream>
#include<string>

using namespace std;

void permutations(string a,int l,int r){
      //base case 
      if(l==r)
      cout<<a<<",";
      //recursive case
      else{
        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);
            //recursion call
            permutations(a,l+1,r);
            //backtracking
            swap(a[l],a[i]);
        }
      } 
}

int main(){
    string input;
    cout<<"enter the string-";
    cin>>input;
    int r=input.size()-1;
    permutations(input,0,r);

    return 0;
}