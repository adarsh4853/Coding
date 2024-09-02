#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int i=0, j = 0, cnt = 0,maxi=0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cnt++;i++;
        }
        j++;
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