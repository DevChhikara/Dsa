#include<iostream>
#include<stack>

using namespace std;

//insert at bottom of th stack 
void InsertAtBottom(stack<int> &s,int data){
    //base case
    if(s.empty()){
        s.push(data);
        return;
    }
    //rec case
    int temp=s.top();
    s.pop();
    InsertAtBottom(s,data);
    s.push(temp);
}

void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //rec case
    int temp=s.top();
    s.pop();
    reverseStack(s);
    InsertAtBottom(s,temp);
}

int main(){
    stack<int> s;


    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
   // InsertAtBottom(s,5);
    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

   
    

    return 0;
}