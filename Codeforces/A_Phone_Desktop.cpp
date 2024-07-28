#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int x, y;
    cin >> x >> y;
    int ans = 0;
    ans += y / 2 + y % 2;
    int temp = ans;
    while (temp > 0)
    {
        x = x - 7;
        temp--;
    }
    if (y & 1)
        x = x - 4;
    while (x > 0)
    {
        ans++;
        x = x - 15;
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