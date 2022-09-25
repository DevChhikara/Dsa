#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//coustom compare func 
bool compare(string a,string b){
    if(a.length()==b.length())
    return a<b;
    else
    return a.length()<b.length();
}

void find_subsets(char *input,char* output,int i,int j,vector<string> &v){
//base case 
if(input[i]=='\0')
{
    output[j]='\0';
  v.push_back(output);
    return ;
}
// rec case
//here we have 2 cases include or not include 
// if included
output[j]=input[i];
find_subsets(input,output,i+1,j+1,v);

//if not included
find_subsets(input,output,i+1,j,v);
}

int main(){
    char input[100];
    char output[100];
    vector<string> list;
    cout<<"give input-";
    cin>>input;
    find_subsets(input,output,0,0,list);
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<list.size();i++){
        cout<<list[i]<<",";
    }
    return 0;
}