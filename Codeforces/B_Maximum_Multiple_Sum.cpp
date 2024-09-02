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
    cin >> n;
    int ans = 0,cnt=1,sum=0,maxsum=0;
    for (int i = 2; i <= n; i++)
    {
        cnt=1,sum=0;
        while(cnt*i<=n)
        {
            sum+=cnt*i;
            cnt++;
        }
        if(maxsum<=sum)
        {
            ans=i;
            maxsum=sum;
        }
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