#include<bits/stdc++.h>
using namespace std;

void transfer(int n,char left,char right,char center)
{
    if(n==0) return; 
    transfer(n-1,left,center,right);
    cout<<"Move disc "<<n<<" from "<<left<<" to "<<right<<'\n';
    transfer(n-1,center,right,left);
    // transfer(n-1,'B','C',i+1);
}

int main()
{
   int n;
   cin>>n;
   transfer(n,'A','C','B');
   return  0;
}