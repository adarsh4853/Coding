#include<bits/stdc++.h>
using namespace std;

bool checkPal(string s,int l,int r)
{
    if(s[l]!=s[r]) return false;
    if(((r-l)<=1)) return true;
    return checkPal(s,l+1,r-1);
}

int main()
{
   string s;
   cin>>s;
   int n=s.size();
   cout<<checkPal(s,0,n-1);
   return 0;
}