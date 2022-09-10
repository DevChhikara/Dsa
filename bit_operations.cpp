#include<iostream>

using namespace std;

int getbit(int n,int x)
{
  int mask=(1<<x);
  return (mask & n) > 0 ? 1 : 0;
}
void setbit(int& n,int x)
{
    int mask=(1<<x);
    n=(n|mask);
}
void clearbit(int &n,int x)
{
    int mask= ~(1<<x);
    n= n & mask;
}
void clearithlastbit(int& n,int i)
{
    int mask= ~0<<i;
     n = mask & n;
}
void clearbitsinrange(int& n,int i,int j)
{
    int a =(~0)<<(j+1);
    int b =(1<<i)-1;
    int mask=a|b;
    n= n & mask;
}

int main()
{
    int n=31;
    int x;
    int j;
    cout<<"give input"<<"-";
    cin>>x>>j;
   // cout<<getbit(n,x)<<endl;
   // setbit(n,x);
   // cout<<n<<endl;
   // clearbit(n,x);
    //clearithlastbit(n,x);
    clearbitsinrange(n,x,j);
    cout<<n<<endl;
    return 0;
}