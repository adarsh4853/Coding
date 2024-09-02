#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;



void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    string s;
    cin>>s;
    s.insert(0, 1, '1');
    vector<int> ans(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        if(ans[i]!=-1) continue;
        if(i==v[i])
        {
            if(s[i]=='0') ans[i]=1;
            else ans[i]=0;
        }
        int cnt=0;
        int j=i;
        do{j=v[j];if(s[j]=='0') cnt++;}
        while(i!=j);
        j=i;
        do{j=v[j];ans[j]=cnt;}
        while(i!=j);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
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