#include<iostream>
using namespace std;

bool is_palindrome(int x)
{
    if(x<0)
    return false;
    long int rev=0;
    long int remainder;
    int temp=x;
    while(x>0)
    {
        remainder=x%10;
        rev=rev*10+remainder;
        x=x/10;
    }
    if(temp==rev)
    return true;
    else
    return false;
}

int main()
{
    int n;
    cout<<"give the integer to be checked"<<endl;
    cin>>n;
    bool y=is_palindrome(n);
    cout<< y <<endl;
    return 0;
}