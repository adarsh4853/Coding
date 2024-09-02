#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()

void runCase()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n ; j++)
        { 
            swap(v[i], v[j]);
            if (v[j] == j + 1 && v[i] == i + 1)
            {
                cout << 2 << '\n';
                return;
            }
            swap(v[i], v[j]);

        }
    }
    // #VanshRA
    // for(int i=0; i<n; i++)
    // {
    //     if(v[v[i]]==i)
    //     {
    //         cout<<"2\n";
    //         return;
    //     }
    // }
    cout << 3 << '\n';
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