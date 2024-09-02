#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{

    int intro, extro, uni;
    cin >> intro >> extro >> uni;
    int ans = intro;
    ans += extro / 3;
    extro = extro % 3;
    if (extro != 0)
    {
        if (uni - (3 - extro) >= 0)
        {
            ans++;
            uni = uni - (3 - extro);
        }
        else
        {
            cout << -1 << '\n';
            return;
        }
    }
    if (uni != 0 && uni%3!=0)
        cout << ans + 1 + uni / 3 << '\n';
    else
        cout << ans+uni/3 << '\n';
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