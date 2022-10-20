//stack based on linked list data structure

template<typename T>
class stack;


template<typename T>
class node{
    public:
    T data;
    node<T> *next;

    node(T d){
        data=d;
    }
};
template<typename T>
class stack{
    node<T> *head;
    public:
    stack(){
        head=nullptr;
    }
    void push(T data){
        node<T> *n=new node<T>(data);
        n->next=head;
        head=n;
    }
    bool empty(){
        return head==nullptr;
    }
    T top(){
        return head->data;
    }
    void pop(){
        if(head!=nullptr){
        node<T> *temp=head;
        head=temp->next;
        //temp->next=nullptr;
        delete temp;
        }
    }
};