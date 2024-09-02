#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if ((((c > a) && (c < b)) && !((d > a) && (d < b))) || (((d > a) && (d < b)) && !((c > a) && (c < b))))
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
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