#include<iostream>
using namespace std;

class queue{
    int *arr;
    int cs;
    int ms;

    int front;
    int rear;

    public:
    queue(int default_size=5){
        cs=default_size;
        arr=new int[ms];
        cs=0;
        front=0;
        rear=ms-1;
    }

    bool full(){
        return cs==ms;
    }

    void push(int data){
        if(!full()){
            rear=(rear+1)%ms;
            arr[rear]=data;
            cs++;
        }
    }

        bool empty(){
            return cs==0;
        }

        void pop(){
            if(!empty()){
                front=(front+1)%ms;
                cs--;
            }
        }
        int Front(){
            return arr[front];
        }
    
};