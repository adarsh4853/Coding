#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int x, y, k;
    cin >> x >> y >> k;
    int cnt=0,temp=0;
    while (true)
    {
        int addi = (y * (x / y)) + y - x;
        if (k - addi < 0) break;
        k -= addi;
        x = x + addi;
        // if(x==temp) break;
        // else temp=x;
        cout << "Inside first loop: x = " << x << ", k = " << k << ", addi = " << addi << '\n';  // Debugging line
        while (x % y == 0) x = x / y;
    }
    temp=0;
    while (k--)
    {
        // if(x==y)
        // {
        //     cout<<x<<'\n';
        //     return;
        // }
        x = x + 1;
        // if(x==temp) break;
        // else temp=x;
        cout << "Inside second loop: x = " << x << ", k = " << k << '\n';  // Debugging line
        while (x % y == 0) x = x / y;
    }
    cout << x << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        runCase();
    }

    return 0;
}
