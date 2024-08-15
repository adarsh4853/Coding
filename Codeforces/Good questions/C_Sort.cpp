#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> v1(26, vector<int>(n, 0)), v2(26, vector<int>(n, 0));
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= 1)
            {
                v1[i][j] = v1[i][j - 1];
                v2[i][j] = v2[i][j - 1];
            }
            else
            {
                v1[i][j] = 0;
                v2[i][j] = 0;
            }
            if ((a[j] - 'a') == i)
                v1[i][j]++;
            if ((b[j] - 'a') == i)
                v2[i][j]++;
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --r;
        --l;
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            cnt += abs((v1[i][r] - (l - 1 < 0 ? 0 : v1[i][l - 1])) - (v2[i][r] - (l - 1 < 0 ? 0 : v2[i][l - 1])));
            // cout << "cnt = " << cnt << '\n';
        }
        cout << cnt / 2 << '\n';
    }
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