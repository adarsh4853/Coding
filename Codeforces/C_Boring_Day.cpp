#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int cnt = 0, i = 0,sum=0,sind=0;
    while (i < n)
    {
        if(sum==0) sind=i;
        sum += v[i];
        while(sum>r)
        {
            sum-=v[sind];
            sind++;
        }
        if (sum >= l && sum <= r)
        {
            cnt++;
            sum=0;
        }
        i++;
    }
    cout << cnt << '\n';
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