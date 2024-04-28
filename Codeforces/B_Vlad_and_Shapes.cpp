#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void runCase()
{
    int n, cnt = 1;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        for (int j = 0; j < n; j++)
        {
            // cout << v[i][j] << " ";
            if (v[i][j] == '1')
                cnt++;
        }
        if (cnt == 1)
        {
            cout << "TRIANGLE" << '\n';
            return;
        }
    }
    cout << "SQUARE" << '\n';
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