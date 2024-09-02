#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void runCase()
{
    int x;
    cin >> x;
    int maxi = 0, maxind = 0;
    for (int i = x-1; i>0; i--)
    {
        int temp = gcd(x,i) + i;
        // cout<<gcd(x,i)<<" ";
        if (maxi < temp)
        {
            maxind = i;
            maxi=temp;
        }
    }
    cout << maxind << '\n';
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