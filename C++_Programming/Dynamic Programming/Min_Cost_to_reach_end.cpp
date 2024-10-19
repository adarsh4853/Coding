#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

//Find minimum cost to reach at that index from any previous index

void runCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=max(i-k,0LL);j--)
        {
            dp[i]=min(dp[i],dp[j]+abs(v[i]-v[j]));
        }
    }
    cout<<dp[n-1]<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }
    return 0;
}