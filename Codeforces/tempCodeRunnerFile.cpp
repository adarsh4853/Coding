#include <bits/stdc++.h>
using namespace std;
#define int long long

// const int inf = (int)1e18;
// const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = -1;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] % 2 == 1)
        {
            if(ans==-1) ans=v[i];
            else ans = (ans + v[i]) / 2;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            if(ans==-1) ans=v[i];
            else ans=(ans+v[i])/2;
        }
    }
    cout << ans << '\n';
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