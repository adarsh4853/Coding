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
    int sub = 0;
    for (int i = 0; i < n - 1; i++) if (v[i] > v[i + 1]) sub = max(sub, (v[i] + v[i + 1] + 1) / 2);
    v[0] = abs(v[0] - sub);
    for (int i = 1; i < n; i++)
    {
        v[i] = abs(v[i] - sub);
        if (v[i] < v[i - 1])
        {
            cout << -1 << '\n';
            return;
        }
    }
    cout << sub << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}