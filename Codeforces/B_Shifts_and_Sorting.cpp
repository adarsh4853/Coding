#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()

void runCase()
{

    string s;
    cin >> s;
    int n = s.size(), r = -1, cnt = 0, cost = 0;
    while ((r++) < n)
    {
        if (cnt != 0 && s[r] == '0')
        {
            cost += cnt + 1;
        }
        else if (s[r] == '1')
            cnt++;
    }
    cout << cost << '\n';
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