#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first - temp >= s)
        {
            cout << "YES" << '\n';
            return;
        }
        else
            temp = v[i].second;
    }
    if (m - temp >= s)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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