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
    int sun = 0, sla = 0;
    //    if(a>c && b>d) sun++;
    //    if(a>d && b>c) sun++;
    //    if(b>d && a>c) sun++;
    //    if(b>c && a>d) sun++;
    if(a>c && b>d) sun++;
    else if(a==c && b>d) sun++;
    else if(b==d && a>c) sun++;
    if(a>d && b>c) sun++;
    else if(a==d && b>c) sun++;
    else if(b==c && a>d) sun++;
    cout << 2*sun << '\n';
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