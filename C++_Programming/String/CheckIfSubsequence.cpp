#include <bits/stdc++.h>
using namespace std;

//Recursive
//TC -> m+n, AS -> m+n
bool checkSubsq(string s,string t,int ns=0,int nt=0)
{
    if(ns==s.size()) return true;
    if(nt==t.size()) return false;
    if(s[ns]==t[nt]) return checkSubsq(s,t,ns+1,nt+1);
    else return checkSubsq(s,t,ns,nt+1);
}

//Iterative is always better

int main()
{
    string s,t;
    cin>>t>>s;

    cout<<checkSubsq(s,t);
    return 0;
}