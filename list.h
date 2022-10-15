#include<iostream>
using namespace std;
class list;

class node{
    friend class list;
    int data;
    
    public:
     ~node(){
        if(next!=nullptr){
            delete next;
        }
     }
     
    node* next;
    //getters
    int getData(){
        return data;
    }
    
     
    node(int d):data(d),next(nullptr){}
};
class list{
    node*head;
    node*tail;
    public:
    list():head(nullptr),tail(nullptr){}

   // func to get the head for print in main as it is aprivate member 
    node*begin(){
        return head;
    }

    void push_front(int data){
    if(head==nullptr){
        node*n=new node(data);
        head=tail=n;
        return;
    }
    else{
        node*n=new node(data);
        n->next=head;
        head=n;
    }
  }
     void push_back(int data){
        if(head==nullptr){
            node*n=new node(data);
            head=tail=n;
            return;
        }
        else{
            node*n=new node(data);
            tail->next=n;
            tail=n;
        }
     }

     void insert(int data,int pos){
        //if pos=0
        if(pos==0){
             push_front(data);
            return;
        }
        //otherwise
         node*temp=head;
         for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
         }
         node*n=new node(data);
         n->next=temp->next;
         temp->next=n;
     }
        int search(int key){
    
        node*temp=head;
        int pos=0;
        while(temp!=nullptr){
            if(key==temp->data){
                 cout<<"element at -> "<< pos;
                 cout<<endl;
            }
            pos++;
            temp=temp->next;
        }
        return -1;
     }

     void pop_front(){
        node*temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;    
     }

     //also do 
     //from last remove
     void pop_back(){
       if(head==nullptr)
       return;
       if(head->next==nullptr){
       delete head;
       }
       node*temp=head;
       while(temp->next->next!=nullptr){
        temp=temp->next;
       }
       tail=temp;
       delete temp->next;
       temp->next=nullptr;

     }
     //rem from pos
     void pop_pos(int pos){
        if(head==nullptr)
        return;
        node*temp=head;
        if(pos==0){
          head=temp->next;
          delete temp;
          return;
        }
        for(int jump=1;temp!=nullptr && jump<=pos-1;jump++){
            temp=temp->next;
        }
        if(temp==nullptr||temp->next==nullptr)
        return;

        node*n=temp->next;
        temp->next=n->next;
        n->next=nullptr;
        delete n;
        
     }

      void reverseList(node*&head){
        node*C=head;
        node*P=nullptr;
        node*N;
        while(C!=nullptr){
            N=C->next;
            C->next=P;
            P=C;
            C=N;
        }
        head=P;
      }

     ~list(){
        if(head!=nullptr){
            delete head;
            head=nullptr;
        }
     }
};

