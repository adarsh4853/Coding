#include<iostream>
#include<algorithm>
using namespace std;

int cut(int n,int a,int b,int c)
{
    if(n<0) return -1;
    if(n==0) return 0;
    int res = max(cut(n - a, a, b, c), max(cut(n - b, a, b, c), cut(n - c, a, b, c)));
    if(res==-1) return -1;
    return res+1;
}

int main()
{
   int n,a,b,c;
   cin>>n>>a>>b>>c;
   cout<<cut(n,a,b,c)<<'\n';
}