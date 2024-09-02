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
    int n,rev=0;
    cin>>n;
    int temp=n;
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n) cout<<"Palindrome"<<'\n';
    else cout<<"NOT Palindrome"<<'\n';
}
