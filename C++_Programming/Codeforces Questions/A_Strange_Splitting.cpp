#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n,flag=0;
    cin>>n;
    vector<int> v(n);
    string s="";
    for(int i=0;i<n;i++) s=s+"B";
    cin>>v[0];
    for (int i = 1; i < n-1; i++)
    {
        cin >> v[i];
        if(v[i-1]!=v[i])
        {
            flag=1;
        }
    }
    if(n!=1) cin>>v[n-1];
    if(flag==0 && v[n-1]!=v[n-2]) 
    {
        s[n-2]='R';
        flag=1;
    }
    if(flag==0) cout<<"No"<<'\n';
    else
    {
        s[n-1]='R';
        cout<<"YES"<<'\n';
        cout<<s<<'\n';
    }
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