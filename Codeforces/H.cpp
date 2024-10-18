#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    --k;
    int r=v[k];
    int i;
    for(i=0;i<n;i++)
    {
        if(v[i]>r) break;
    }
    if(i==n)
    {
        cout<<n-1<<'\n';
    }
    else if(k<i)
    {
        cout<<max(0LL,i-1)<<'\n';
    }
    else
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(v[i]!=v[j] && v[j]>r) break;
        }
        int ans=min(k,j)-i-1;
        if(i!=0) ans++;
        cout<<max(i-1,ans)<<'\n'; 
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
        if(i==12)
        {
            int n,k;
            cin>>n>>k;
            vector<int> v(n);
            for(int i=0;i<n;i++) cin>>v[i]; 
            cout<<k<<' ';
            for(int i=0;i<n;i++) cout<<v[i]<<' ';
            cout<<'\n';
        }
        runCase();
    }
    return 0;
}