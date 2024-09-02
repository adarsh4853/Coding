#include <bits/stdc++.h>
using namespace std;
#define int long long

//const int inf = (int)1e18;
//const int mod = 1e9 + 7;

void runCase()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n==2) 
    {
        cout<<max(v[0],v[1])<<'\n';
        return;
    }
    if(n%2==0)
    {
        cout<<max(v[n-3],v[n-1])<<'\n';
    }
    else cout<<v[n-2]<<'\n';
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