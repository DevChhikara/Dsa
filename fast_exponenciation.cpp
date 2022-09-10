#include<iostream>
using namespace std;

int fast_exponenciation(int a,int n)
{
    int ans =1;
    
    while(n>0)
    {
        int last_bit=(n&1);
        if(last_bit)
        {
        ans=ans*a;
        }
    a=a*a;
    n=n>>1;
    
    }
    return ans;
}

int main()
{
    int a;
    int n;
    cout<<"give input"<<endl;
    cin>>a;
    cin>>n;
   cout<<fast_exponenciation(a,n)<<endl;
    return 0;
}

