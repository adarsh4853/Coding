#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n+1;i++) cin>>b[i];
    int ans=0,mx=0,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]-b[i]);
        mx=max(mx,max(a[i],b[i]));
        mn=min(mn,min(a[i],b[i]));
    }
    if(b[n]<=mx && b[n]>=mn) ans+=1;
    else if(b[n]>mx) ans+=b[n]-mx+1;
    else ans+=mn-b[n]+1;
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