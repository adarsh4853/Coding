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
    // vector<vector<int>> v(n, vector<int>(n));
    char v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    // cout<<v[0][0];
    // cout<<"hello"<<'\n';
    vector<vector<char>> ans;
    for(int i=0;i<n;i+=k)
    {
        vector<char> temp;
        for(int j=0;j<n;j+=k)
        {
            // cout<<v[i][j]<<' ';
            temp.push_back(v[i][j]);
        }
        ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<'\n';
    }
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