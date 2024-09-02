#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

int binarySearch(vector<int> x, int n, int k)
{
    int l=-1,r=n;
    int mid = l + (r - l) / 2, ans = 0;
    // while (l <= r)
    // {
    //     mid = l + (r - l) / 2;
    //     if (x[mid] == k)
    //         return mid;
    //     else if (x[mid] > k)
    //     {
    //         r = mid - 1;
    //     }
    //     else
    //     {
    //         ans = mid;
    //         l = mid + 1;
    //     }
    // }
    // return ans;

    while(r-l>1)
    {
        mid=l + (r - l) / 2;
        if(x[mid]>k) r=mid;
        else l=mid;
    }
    return l;
}

void runCase()
{
    int n, q;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    cin >> q;
    vector<int> m(q);
    for (int i = 0; i < q; i++)
        cin >> m[i];

    sort(all(x));
    vector<int> ans(q);
    for (int i = 0; i < q; i++)
    {
        // if (m[i] > x[n - 1])
            // ans[i] = n;
        // if(m[i]<x[0]) ans[i]=0; 
        ans[i] = binarySearch(x,n, m[i]) + 1;
        cout << ans[i] << '\n';
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    //    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}