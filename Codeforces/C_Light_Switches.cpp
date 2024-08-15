#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(all(v));

    int num = v[n - 1];
    int cnt = 0;

    for (int j = n - 2; j >= 0; j--)
    {
        if (v[j] < num - k) 
        {
            cnt += (num - k - v[j] + k - 1) / k;
            v[j] += cnt * k;
        }
        
        if (cnt > k)
        {
            cout << -1 << '\n';
            return;
        }
    }

    cout << num << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        runCase();
    }

    return 0;
}
