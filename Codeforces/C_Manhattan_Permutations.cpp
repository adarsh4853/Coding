#include <bits/stdc++.h>
using namespace std;
#define int long long

void runCase()
{
    int n, k;
    cin >> n >> k;
    if (k % 2 != 0)
    {
        cout << "No" << '\n';
        return;
    }

    if (((n % 2 == 0) && (k > ((n / 2) * n))) || ((n & 1) && (k > ((n - 1) + ((n - 1) * (n - 1) / 2)))))
    {
        cout << "No" << '\n';
        return;
    }

    vector<int> ans(n);
    // if (k <= ((n - 1) * 2))
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if ((i - 1) == k / 2)
    //         {
    //             ans[i - 1] = 1;
    //             ans[0] = i;
    //             break;
    //         }
    //     }
    //     cout << "Yes" << '\n';
    //     for (int i = 1; i <= n; i++)
    //     {
    //         if (ans[i - 1] == 0)
    //             ans[i - 1] = i;
    //         cout << ans[i - 1] << ' ';
    //     }
    //     cout << '\n';
    //     return;
    // }
    // else
    // {
    for (int i = 1; i <= n; i++)
        ans[i - 1] = i;
    int i = 0, j = n - 1;
    k /= 2;
    while (i < j)
    {
        int diff = (ans[j] - ans[i]);
        swap(ans[i], ans[j]);
        k -= diff;
        if(k==0) break;
        else if(k<0)
        {
            k+=diff;
            swap(ans[i],ans[j]);
            j++;
        }
        i++;
        j--;
        // else
        // {
        //     break;
        // }
    }
    if (k == 0)
    {
        cout << "Yes" << '\n';
        for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
    else cout<<"No"<<'\n';
    // }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
        runCase();
    return 0;
}
