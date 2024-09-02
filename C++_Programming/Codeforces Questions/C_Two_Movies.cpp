#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int temp1 = 0, temp2 = 0, var1 = 0, var2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            temp1 += a[i];
        }
        else if (b[i] > a[i])
        {
            temp2 += b[i];
        }
        else
        {
            if (a[i] == -1)
                var1 += a[i];
            else if (a[i] == 1)
                var2 += a[i];
            // cout<<var1<<' '<<var2<<'\n';
            // else
            // {
            //     if (temp1 > temp2)
            //     {
            //         temp2 += b[i];
            //         if (var < 0)
            //         {
            //             if (temp2 > temp1)
            //                 temp2 += -1;
            //             else
            //                 temp1 += -1;
            //             var++;
            //         }
            //     }
            //     else
            //     {
            //         temp1 += a[i];
            //         if (var < 0)
            //         {
            //             if (temp2 > temp1)
            //                 temp2 += -1;
            //             else
            //                 temp1 += -1;
            //             var++;
            //         }
            //     }
            // }
        }
    }
    while ((var1 != 0) || (var2 != 0))
    {
            // cout<<var1<<' '<<var2<<'\n';
            // cout<<temp1<<' '<<temp2<<'\n';
        if (var2 > 0)
        {
            if (temp1 < temp2)
                temp1++;
            else
                temp2++;
            var2--;
        }
        if (var1 < 0)
        {
            if (temp1 < temp2)
                temp2-=1;
            else
                temp1-=1;
            var1++;
            // cout<<temp1<<' '<<temp2<<'\n';
        }
    }
    cout << min(temp1, temp2) << '\n';
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