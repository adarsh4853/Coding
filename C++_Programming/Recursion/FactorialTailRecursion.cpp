#include<iostream>
using namespace std;

// int k=1;

// int fact(int n)
// {
//     if(n==0) return 1;
//     k*=n;
//     fact(n-1);
//     return k;
// }

int fact(int n,int k)
{
    if(n==0) return k;
    return fact(n-1,n*k);
}

int main()
{
   int n;
   cin>>n;
   cout<<fact(n,1)<<'\n';
}