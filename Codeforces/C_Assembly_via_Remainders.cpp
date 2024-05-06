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
    cin>>n;
    vector<int> x(n - 1), a(n);
    for (int i = 0; i < n - 1; i++) cin >> x[i];
    a[0] = x[0]+1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=x[i]) 
        {
            while(a[i]<=x[i]) a[i]+=a[i-1];
        }
        a[i+1]=a[i]+x[i];
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<'\n';
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