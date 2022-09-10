#include<iostream>
using namespace std;

void clearbitsinrange(int& n,int i,int j)
{
    int a =(~0)<<(j+1);
    int b =(1<<i)-1;
    int mask=a|b;
    n= n & mask;
}
 
void replacebits(int& n,int &m,int i,int j)
{
   clearbitsinrange(n,i,j);
   int mask=(m<<i);
   n=mask | n;
}

int main()
{
    int n=15;
    int i=1;
    int j=3;
    int m=2;
replacebits(n,m,i,j);
cout<<n<<endl;
return 0;
}

