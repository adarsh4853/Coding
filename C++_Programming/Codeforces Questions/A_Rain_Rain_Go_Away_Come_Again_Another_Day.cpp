#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n,ans=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    vector<int> lmax(n),rmax(n);
    lmax[0]=v[0];rmax[n-1]=v[n-1];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],v[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],v[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        ans+=(min(lmax[i],rmax[i])-v[i]);
    }
    cout<<ans<<'\n';
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