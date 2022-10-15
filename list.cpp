#include<iostream>
#include"list.h"

using namespace std;
     
int main()
{
   list l;
   l.push_front(1);
   l.push_front(2);
   l.push_front(3);
   l.push_front(4);
   l.push_back(0); 
   l.push_back(7);
   l.push_back(8);
   // l.search(2);
   l.pop_pos(3);
    
   
   node*head=l.begin();
   while(head!=nullptr){
    cout<<head->getData()<<"->";
    head=head->next;
   }
   cout<<endl;

     return 0;
   }

 
