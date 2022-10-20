#include<iostream>
#include"queue.h"


using namespace std;

int main(){

    queue q(7);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    q.push(7);

    while(!q.empty()){
       cout<<q.Front()<<" ";
       q.pop();
    }
    

    return 0;
}