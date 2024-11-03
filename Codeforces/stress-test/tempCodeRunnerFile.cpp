#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase(int &testcase)
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n==1) {cout<<1<<'\n';return;}
    sort(v.begin(),v.end());
    if(n%2==0)
    {
        int ans=0;
        for(int i=1;i<n;i+=2)
        {
            ans=max(ans,v[i]-v[i-1]);
        }
        cout<<ans<<'\n';
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i+=2)
    {
        int cnt=1;
        for(int j=1;j<=i-1;j+=2)
        {
            cnt=max(cnt,v[j]-v[j-1]);
        // cout<<cnt<<"p\n";
        }
        for(int j=i+2;j<n;j+=2)
        {
            cnt=max(cnt,v[j]-v[j-1]);
        //     cout<<v[i]<<' '<<v[i-1]<<'\n';
        // cout<<cnt<<"q\n";
        }
        // cout<<cnt<<"H\n";
        ans=min(cnt,ans);
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
        // cout << "Case #" << i << ": \n";
        runCase(i);
    }
    return 0;
}