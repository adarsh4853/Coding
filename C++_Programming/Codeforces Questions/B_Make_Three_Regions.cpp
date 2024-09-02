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
    vector<vector<char>> v(2, vector<char>(n));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    int cnt=0;
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(v[i][j]=='.'&&v[i][j-1]=='x' && v[i][j+1]=='x')
            {
                if(i==0) 
                {
                    if(v[i+1][j-1]!='x' && v[i+1][j+1]!='x') cnt++;
                }
                else 
                {
                    if(v[i-1][j-1]!='x' && v[i-1][j+1]!='x') cnt++;
                }
            }
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