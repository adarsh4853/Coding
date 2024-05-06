#include<iostream>
using namespace std;

int num=1;

void printNum(int n,int k)
{
    // if(n==0) return;
    // printNum(n-1);
    // cout<<n<<" ";

    //tail recursive

    // if(num>n) return;
    // cout<<num<<" ";
    // num++;
    // printNum(n);

    if(n==0) return;
    cout<<k<<" ";
    printNum(n-1,k+1);
}

int main()
{
   int n;
   cin>>n;
   printNum(n,1);
   return 0;
}