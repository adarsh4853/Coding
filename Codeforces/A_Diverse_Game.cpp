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
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    if(n==1 && m==1)
    {
        cout<<-1<<'\n';
        return;
    }
    vector<int> temp(m);
    for(int i=0;i<m;i++) temp[i]=a[0][i];
    vector<vector<int>> b(n, vector<int>(m));
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i-1][j]=a[i][j];
        }
    }
    for(int i=0;i<m;i++) a[n-1][i]=temp[i];
    for(int i=0;i<n;i++)
    {
        int temp=a[i][0];
        for(int j=0;j<m-1;j++)
        {
            a[i][j]=a[i][j+1];
        }
        a[i][m-1]=temp;
    }
    for (int i = 0; i < n; i++)
        {for (int j = 0; j < m; j++)
            {cout<<a[i][j]<<' ';}
            cout<<'\n';}

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