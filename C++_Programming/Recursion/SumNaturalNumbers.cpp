#include<iostream>
using namespace std;

int Addition(int n)
{
    if(n==0) return 0;
    return n + Addition(n-1);
}

int main()
{
   int n;
   cin>>n;
   cout<<Addition(n)<<'\n';
}