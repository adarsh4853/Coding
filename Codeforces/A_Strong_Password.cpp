#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] + 1 <= 'z')
                s.insert(i, 1, s[i] + 1);
            else
                s.insert(i, 1, s[i] - 1);
            cout << s << '\n';
            return;
        }
    }
    if (s[n - 1] + 1 <= 'z')
        s.insert(n, 1, s[n - 1] + 1);
    else
        s.insert(n, 1, s[n - 1] - 1);
    cout << s << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        runCase();
    }

    return 0;
}
