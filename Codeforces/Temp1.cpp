#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int binSearch(vector<int> v, int l, int r, int k)
{
    int mid;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        if (v[mid] > k)
            r = mid - 1;
        else
            l = mid;
    }
    return l;
}

void runCase()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<pair<int, int>> b(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i].first >> b[i].second;
    }
    sort(all(a));
    int l = 0, r = n - 1;
    int mid;
    for (int i = 0; i < q; i++)
    {
        int ind = binSearch(a, l, r, b[i].first);
        int cnt = 1, it1 = ind, it2 = ind;
        while (true)
        {
            if (abs(a[it1] - b[i].first) < abs(a[it2] - b[i].first))
            {
                // cout<<b[i].second<<' '<<a[it1]<<' '<<a[it2]<<'\n';
                if (it1 - 1 > 0)
                    it1 -= 1;
                else
                    it2++;
                b[i].second--;
                if (b[i].second == 0)
                {
                    cout << abs(a[it1 - 1] - b[i].first) << '\n';
                    return;
                }
            }
            else
            {
                // cout<<b[i].second<<' '<<a[it1]<<' '<<a[it2]<<'\n';
                if (it2 + 1 < n - 1)
                    it2 += 1;
                else
                    it1--;
                b[i].second--;
                if (b[i].second == 0)
                {
                    cout << abs(a[it2 - 1] - b[i].first) << '\n';
                    return;
                }
            }
        }
        // cout << abs(a[cnt - 1] - b[i].first) << '\n';
    }

    // for (int i = 0; i < q; i++)
    // {
    //     vector<int> temp(n);
    //     for (int j = 0; j < n; j++)
    //     {
    //         temp[j] = abs(a[j] - b[i].first);
    //     }
    //     sort(all(temp));
    //     cout << temp[b[i].second - 1] << '\n';
    // }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    // cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}