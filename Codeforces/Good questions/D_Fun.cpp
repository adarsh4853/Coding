#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, x;
    cin >> n >> x;
    int cnt=0;
    for (int i = 1; i <= x - 2; i++)
    {
        for (int j = 1; j <= min(x - i - 1, n / i); j++)
        {
            cnt+=max((long long)0,min((n-i*j)/(i+j),x-i-j));
        }
    }
    cout<<cnt<<'\n';
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