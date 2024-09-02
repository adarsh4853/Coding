#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    string s, t;
    cin >> s >> t;
    int m = s.size(), n = t.size();
    int i = 0, j = 0,k=0,l=n-1;
    while(i<m && j<n)
    {
        if(s[i]==t[j]) 
        {
            i++;j++;
        }
        else if(s[i]!='?')
        {
            i++;
        }
        else{
            s[i]=t[j];
            i++;j++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(s[i]=='?') s[i]='a';
    }
    // cout<<s<<'\n';
    if(j==n) {
        cout<<"YES"<<'\n';
        cout<<s<<'\n';
    }
    else cout<<"NO"<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}