#include<iostream>
//#include"stackLL.h"
#include"stackV.h"

using namespace std;

int main(){
    stack<char> s;
    s.push('o');
     s.push('l');
      s.push('l');
       s.push('e');
        s.push('h');

       while(!s.empty()){
        cout<<s.top();
        s.pop();
       }
        return 0;
}