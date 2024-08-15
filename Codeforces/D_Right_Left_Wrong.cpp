#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    string s;
    cin>>s;
    int sum=0;
    int l=0,r=n-1;
    vector<int> pfs(n);
    pfs[0]=v[0];
    for(int i=1;i<n;i++) 
    {
        pfs[i]=v[i]+pfs[i-1];
    }
    while(r>l)
    {
        if(s[l]=='L' && s[r]=='R')
        {
            if(l-1>=0) sum+=pfs[r]-pfs[l-1];
            else sum+=pfs[r];
            l++;r--;
        }
        else if(s[l]=='L')
        {
            r--;
        }
        else l++;
    }
    cout<<sum<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}